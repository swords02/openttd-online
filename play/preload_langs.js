(function() {
  var LANG_FILES = [
    "afrikaans.lng",
    "arabic_egypt.lng",
    "basque.lng",
    "belarusian.lng",
    "brazilian_portuguese.lng",
    "bulgarian.lng",
    "catalan.lng",
    "chuvash.lng",
    "croatian.lng",
    "czech.lng",
    "danish.lng",
    "dutch.lng",
    "english_AU.lng",
    "english_US.lng",
    "esperanto.lng",
    "estonian.lng",
    "faroese.lng",
    "finnish.lng",
    "french.lng",
    "frisian.lng",
    "gaelic.lng",
    "galician.lng",
    "german.lng",
    "greek.lng",
    "hebrew.lng",
    "hindi.lng",
    "hungarian.lng",
    "icelandic.lng",
    "ido.lng",
    "indonesian.lng",
    "irish.lng",
    "italian.lng",
    "japanese.lng",
    "korean.lng",
    "latin.lng",
    "latvian.lng",
    "lithuanian.lng",
    "luxembourgish.lng",
    "macedonian.lng",
    "malay.lng",
    "maltese.lng",
    "maori.lng",
    "marathi.lng",
    "norwegian_bokmal.lng",
    "norwegian_nynorsk.lng",
    "persian.lng",
    "polish.lng",
    "portuguese.lng",
    "romanian.lng",
    "russian.lng",
    "serbian.lng",
    "simplified_chinese.lng",
    "slovak.lng",
    "slovenian.lng",
    "spanish.lng",
    "spanish_MX.lng",
    "swedish.lng",
    "tamil.lng",
    "thai.lng",
    "traditional_chinese.lng",
    "turkish.lng",
    "ukrainian.lng",
    "urdu.lng",
    "vietnamese.lng",
    "welsh.lng"
  ];

  if (typeof Module === "undefined") Module = {};
  Module.preRun = Module.preRun || [];

  Module.preRun.push(function() {
    try { FS.mkdir("/lang"); } catch (e) {}

    if (!LANG_FILES.length) return;

    var addDep = (typeof addRunDependency === "function") ? addRunDependency : Module.addRunDependency;
    var removeDep = (typeof removeRunDependency === "function") ? removeRunDependency : Module.removeRunDependency;

    if (addDep) addDep("external-language-packs");

    Promise.all(LANG_FILES.map(function(name) {
      return fetch("lang/" + name, { cache: "no-cache" })
        .then(function(response) {
          if (!response.ok) throw new Error("Missing language file: " + name);
          return response.arrayBuffer();
        })
        .then(function(buffer) {
          FS.writeFile("/lang/" + name, new Uint8Array(buffer));
        });
    })).then(function() {
      console.log("Loaded external language packs:", LANG_FILES.length);
      if (removeDep) removeDep("external-language-packs");
    }).catch(function(err) {
      console.error("Failed to load external language packs:", err);
      if (removeDep) removeDep("external-language-packs");
    });
  });
})();
