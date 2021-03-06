SET(VIRTUALPLANETBUILDER_MAJOR_VERSION 1)
SET(VIRTUALPLANETBUILDER_MINOR_VERSION 1)
SET(VIRTUALPLANETBUILDER_PATCH_VERSION 0)
SET(VIRTUALPLANETBUILDER_SOVERSION 30)

# set to 0 when not a release candidate, non zero means that any generated
# svn tags will be treated as release candidates of given number
SET(VIRTUALPLANETBUILDER_RELEASE_CANDIDATE 0)

SET(VIRTUALPLANETBUILDER_VERSION ${VIRTUALPLANETBUILDER_MAJOR_VERSION}.${VIRTUALPLANETBUILDER_MINOR_VERSION}.${VIRTUALPLANETBUILDER_PATCH_VERSION})

# Make the headers visible to everything
INCLUDE_DIRECTORIES(
    ${VIRTUALPLANETBUILDER_SOURCE_DIR}/include
    ${OPENGL_INCLUDE_DIR}
)

# Dynamic vs Static Linking
SET(VIRTUALPLANETBUILDER_USER_DEFINED_DYNAMIC_OR_STATIC "STATIC")

SET(LIB_NAME vpb)

SET(HEADER_PATH ${VIRTUALPLANETBUILDER_SOURCE_DIR}/include/${LIB_NAME})
SET(LIB_PUBLIC_HEADERS
    ${HEADER_PATH}/BlockOperation
    ${HEADER_PATH}/BuildLog
    ${HEADER_PATH}/BuildOperation
    ${HEADER_PATH}/BuildOptions
    ${HEADER_PATH}/Commandline
    ${HEADER_PATH}/DatabaseBuilder
    ${HEADER_PATH}/DataSet
    ${HEADER_PATH}/Date
    ${HEADER_PATH}/Destination
    ${HEADER_PATH}/Export
    ${HEADER_PATH}/ExtrudeVisitor
    ${HEADER_PATH}/FileCache
    ${HEADER_PATH}/FileDetails
    ${HEADER_PATH}/FileUtils
    ${HEADER_PATH}/FilePathManager
    ${HEADER_PATH}/GeospatialDataset
    ${HEADER_PATH}/HeightFieldMapper
    ${HEADER_PATH}/MachinePool
    ${HEADER_PATH}/ObjectPlacer
    ${HEADER_PATH}/PropertyFile
    ${HEADER_PATH}/ShapeFilePlacer
    ${HEADER_PATH}/Source
    ${HEADER_PATH}/SourceData
    ${HEADER_PATH}/SpatialProperties
    ${HEADER_PATH}/System
    ${HEADER_PATH}/TextureUtils
    ${HEADER_PATH}/Task
    ${HEADER_PATH}/TaskManager
    ${HEADER_PATH}/ThreadPool
    ${HEADER_PATH}/Version
)

set(CMAKE_CURRENT_SOURCE_DIR ${VIRTUALPLANETBUILDER_SOURCE_DIR}/src/${LIB_NAME})
ADD_LIBRARY(${LIB_NAME}
    ${VIRTUALPLANETBUILDER_USER_DEFINED_DYNAMIC_OR_STATIC}
    ${LIB_PUBLIC_HEADERS}
    ${CMAKE_CURRENT_SOURCE_DIR}/BuildLog.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/BuildOperation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/BuildOptions.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/BuildOptionsIO.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Commandline.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/DatabaseBuilder.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/DatabaseBuilderIO.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/DataSet.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Date.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Destination.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ExtrudeVisitor.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/FileCache.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/FileDetails.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/FileUtils.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/FilePathManager.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/GeospatialDataset.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/HeightFieldMapper.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/MachinePool.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ObjectPlacer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PropertyFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ShapeFilePlacer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Source.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SourceData.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/SpatialProperties.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/System.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TextureUtils.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Task.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/TaskManager.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ThreadPool.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Version.cpp
)

INCLUDE_DIRECTORIES(${GDAL_INCLUDE_DIR} ${OPENSCENEGRAPH_INCLUDE_DIR} )
