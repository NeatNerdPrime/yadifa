{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":".gitignore","path":".gitignore","contentType":"file"},{"name":"LICENSE.txt","path":"LICENSE.txt","contentType":"file"},{"name":"Makefile","path":"Makefile","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"},{"name":"pcg32-demo.c","path":"pcg32-demo.c","contentType":"file"},{"name":"pcg32-global-demo.c","path":"pcg32-global-demo.c","contentType":"file"},{"name":"pcg32x2-demo.c","path":"pcg32x2-demo.c","contentType":"file"},{"name":"pcg_basic.c","path":"pcg_basic.c","contentType":"file"},{"name":"pcg_basic.h","path":"pcg_basic.h","contentType":"file"}],"totalCount":9}},"fileTreeProcessingTime":2.583661,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":25372092,"defaultBranch":"master","name":"pcg-c-basic","ownerLogin":"imneme","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2014-10-17T18:46:23.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/7436781?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1613524111.7004428","canEdit":false,"refType":"branch","currentOid":"bc39cd76ac3d541e618606bcc6e1e5ba5e5e6aa3"},"path":"README.md","currentUser":null,"blob":{"rawLines":null,"stylingDirectives":null,"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/imneme/pcg-c-basic/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/imneme/pcg-c-basic/security/dependabot","repoSecurityAndAnalysisPath":"/imneme/pcg-c-basic/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"README.md","displayUrl":"https://github.com/imneme/pcg-c-basic/blob/master/README.md?raw=true","headerInfo":{"blobSize":"1.84 KB","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"da48795","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fimneme%2Fpcg-c-basic%2Fblob%2Fmaster%2FREADME.md","isCSV":false,"isRichtext":true,"toc":[{"level":1,"text":"PCG Random Number Generation, Minimal C Edition","anchor":"pcg-random-number-generation-minimal-c-edition","htmlText":"PCG Random Number Generation, Minimal C Edition"},{"level":2,"text":"Documentation and Examples","anchor":"documentation-and-examples","htmlText":"Documentation and Examples"},{"level":2,"text":"Building","anchor":"building","htmlText":"Building"},{"level":2,"text":"Testing","anchor":"testing","htmlText":"Testing"}],"lineInfo":{"truncatedLoc":"55","truncatedSloc":"36"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"Markdown","languageID":222,"large":false,"loggedIn":false,"newDiscussionPath":"/imneme/pcg-c-basic/discussions/new","newIssuePath":"/imneme/pcg-c-basic/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/imneme/pcg-c-basic/blob/master/README.md","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/imneme/pcg-c-basic/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":"<article class=\"markdown-body entry-content container-lg\" itemprop=\"text\"><h1 tabindex=\"-1\" id=\"user-content-pcg-random-number-generation-minimal-c-edition\" dir=\"auto\"><a class=\"heading-link\" href=\"#pcg-random-number-generation-minimal-c-edition\">PCG Random Number Generation, Minimal C Edition<svg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"><path d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"></path></svg></a></h1>\n<p dir=\"auto\">This code provides a minimal implementation of one member of the PCG family\nof random number generators, which are fast, statistically excellent,\nand offer a number of useful features.</p>\n<p dir=\"auto\">Full details can be found at the <a href=\"http://www.pcg-random.org\" rel=\"nofollow\">PCG-Random website</a>.  This version\nof the code provides a single family member and skips some useful features\n(such as jump-ahead/jump-back) -- if you want a more full-featured library,\nyou may prefer the full version of the C library, or for all features,\nthe C++ library.</p>\n<h2 tabindex=\"-1\" id=\"user-content-documentation-and-examples\" dir=\"auto\"><a class=\"heading-link\" href=\"#documentation-and-examples\">Documentation and Examples<svg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"><path d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"></path></svg></a></h2>\n<p dir=\"auto\">Visit <a href=\"http://www.pcg-random.org\" rel=\"nofollow\">PCG-Random website</a> for information on how to use this library, or look\nat the sample code -- hopefully it should be fairly self explanatory.</p>\n<h2 tabindex=\"-1\" id=\"user-content-building\" dir=\"auto\"><a class=\"heading-link\" href=\"#building\">Building<svg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"><path d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"></path></svg></a></h2>\n<p dir=\"auto\">There is no library to build.  Just use the code.  You can however build the\nthree demo programs.</p>\n<p dir=\"auto\">The code is written in C89-style C with no significant platform dependencies.\nOn a Unix-style system (e.g., Linux, Mac OS X), or any system with <code>make</code>,\nyou should be able to just type type</p>\n<div class=\"snippet-clipboard-content notranslate position-relative overflow-auto\" data-snippet-clipboard-copy-content=\"make\"><pre class=\"notranslate\"><code>make\n</code></pre></div>\n<p dir=\"auto\">Almost all the real code is in <code>pcg_basic.c</code>, with type and function\ndeclarations in <code>pcg_basic.h</code>.</p>\n<p dir=\"auto\">On other systems, it should be straightforward to build.  For example, you\neven run the code directly using the tinycc compiler, using</p>\n<div class=\"snippet-clipboard-content notranslate position-relative overflow-auto\" data-snippet-clipboard-copy-content=\"cat pcg_basic.c pcg32-demo.c | tcc -run\"><pre class=\"notranslate\"><code>cat pcg_basic.c pcg32-demo.c | tcc -run\n</code></pre></div>\n<h2 tabindex=\"-1\" id=\"user-content-testing\" dir=\"auto\"><a class=\"heading-link\" href=\"#testing\">Testing<svg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"><path d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"></path></svg></a></h2>\n<p dir=\"auto\">This command will build the three provided demo programs, <code>pcg32-global-demo</code>\n(which uses the global rng), <code>pcg32-demo</code> (which uses a local generator), and\npcg32x2-demo (which gangs together two generators, showing the usefulness of\ncreating multiple generators).</p>\n<p dir=\"auto\">To run the demos using a fixed seed (same output every time), run</p>\n<div class=\"snippet-clipboard-content notranslate position-relative overflow-auto\" data-snippet-clipboard-copy-content=\"./pcg32-demo\"><pre class=\"notranslate\"><code>./pcg32-demo\n</code></pre></div>\n<p dir=\"auto\">To produce different output, run</p>\n<div class=\"snippet-clipboard-content notranslate position-relative overflow-auto\" data-snippet-clipboard-copy-content=\"./pcg32-demo -r\"><pre class=\"notranslate\"><code>./pcg32-demo -r\n</code></pre></div>\n<p dir=\"auto\">You can also pass an integer count to specify how may rounds of output you\nwould like.</p>\n</article>","renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"imneme","repoName":"pcg-c-basic","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":" PCG Random Number Generation, Minimal C Edition","kind":"section_1","identStart":1,"identEnd":49,"extentStart":0,"extentEnd":1881,"fullyQualifiedName":" PCG Random Number Generation, Minimal C Edition","identUtf16":{"start":{"lineNumber":0,"utf16Col":1},"end":{"lineNumber":0,"utf16Col":49}},"extentUtf16":{"start":{"lineNumber":0,"utf16Col":0},"end":{"lineNumber":55,"utf16Col":0}}},{"name":" Documentation and Examples","kind":"section_2","identStart":598,"identEnd":625,"extentStart":596,"extentEnd":777,"fullyQualifiedName":" Documentation and Examples","identUtf16":{"start":{"lineNumber":14,"utf16Col":2},"end":{"lineNumber":14,"utf16Col":29}},"extentUtf16":{"start":{"lineNumber":14,"utf16Col":0},"end":{"lineNumber":19,"utf16Col":0}}},{"name":" Building","kind":"section_2","identStart":779,"identEnd":788,"extentStart":777,"extentEnd":1374,"fullyQualifiedName":" Building","identUtf16":{"start":{"lineNumber":19,"utf16Col":2},"end":{"lineNumber":19,"utf16Col":11}},"extentUtf16":{"start":{"lineNumber":19,"utf16Col":0},"end":{"lineNumber":38,"utf16Col":0}}},{"name":" Testing","kind":"section_2","identStart":1376,"identEnd":1384,"extentStart":1374,"extentEnd":1881,"fullyQualifiedName":" Testing","identUtf16":{"start":{"lineNumber":38,"utf16Col":2},"end":{"lineNumber":38,"utf16Col":10}},"extentUtf16":{"start":{"lineNumber":38,"utf16Col":0},"end":{"lineNumber":55,"utf16Col":0}}}]}},"copilotInfo":null,"csrf_tokens":{"/imneme/pcg-c-basic/branches":{"post":"jgBjmoHmULjaIvS1i90-VEaxAYNjpQ_Xxm6lxI4ExcPFiRnjXi4hq0idoS1e7JEeuTzebronVooU7ymgXqxzgw"},"/repos/preferences":{"post":"Y3p7iW8yt7K-8GF7J0oag2aaxuVFs2jMKFP84a-TMgTt63c9uXB7TcfawmUS2Aia5kPoOPiJLOCh_AlVwDCcIw"}}},"title":"pcg-c-basic/README.md at master · imneme/pcg-c-basic"}