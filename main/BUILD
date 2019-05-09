cc_library(
    name = "greeting-service",
    srcs = ["greeting-service.cpp"],
    hdrs = ["greeting-service.h"],
)

cc_binary(
    name = "hello-bazel",
    srcs = ["main.cpp"],
    deps = [
        ":greeting-service",
    ]
)