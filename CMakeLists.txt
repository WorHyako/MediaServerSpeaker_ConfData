cmake_minimum_required(VERSION 3.24)

add_library(MediaServerSpeaker_ConfData)
add_library(Mss::ConfData ALIAS MediaServerSpeaker_ConfData)

file(GLOB_RECURSE Sources src/*.cpp)
target_sources(MediaServerSpeaker_ConfData
        PRIVATE ${Sources})

target_include_directories(MediaServerSpeaker_ConfData
        PUBLIC include
        PRIVATE include/ConfData)

target_link_libraries(MediaServerSpeaker_ConfData
        PRIVATE Wor::Sql)
