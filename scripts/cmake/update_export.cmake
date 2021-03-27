macro(xtd_update_export_file path keyword export)
  if (XTD_BUILD_SHARED_LIBRARIES)
    file(WRITE ${path} 
      "// This code was generated by CMake script.\n"
      "//\n"
      "// Changes to this file may cause incorrect behavior and will be lost if the file is regenerated.\n"
      "\n"
      "/// @file\n"
      "/// @brief Contains #${export} keyword.\n"
      "/// @copyright Copyright (c) 2021 Gammasoft. All rights reserved.\n"
      "#pragma once\n"
      "\n"
      "#if defined(WIN32)\n"
      "#  if defined(${keyword})\n"
      "#    define ${export} __declspec(dllexport)\n"
      "#  else\n"
      "#    define ${export} __declspec(dllimport)\n"
      "#  endif\n"
      "#else\n"
      "#  if defined(${keyword})\n"
      "#    define ${export} __attribute__((visibility (\"default\")))\n"
      "#  else\n"
      "#    define ${export}\n"
      "#  endif\n"
      "#endif\n"
    )
  else()
    file(WRITE ${path} 
      "// This code was generated by CMake script.\n"
      "//\n"
      "// Changes to this file may cause incorrect behavior and will be lost if the file is regenerated.\n"
      "\n"
      "/// @file\n"
      "/// @brief Contains #${export} keyword.\n"
      "/// @copyright Copyright (c) 2021 Gammasoft. All rights reserved.\n"
      "#pragma once\n"
      "\n"
      "/// @brief Define shared library export.\n"
      "/// @ingroup keywords\n"
      "#define ${export}\n"
    )
  endif()
endmacro()
