# Copyright 2018 The Fuchsia Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

LOCAL_DIR := $(GET_LOCAL_DIR)

MODULE := $(LOCAL_DIR)

MODULE_TYPE := usertest

MODULE_SRCS += \
    $(LOCAL_DIR)/main.cpp \

MODULE_SRCS += \
    $(LOCAL_DIR)/string-list.cpp \
    $(LOCAL_DIR)/string-map.cpp \

MODULE_NAME := fuzz-utils-test

MODULE_LIBS := \
    system/ulib/c \
    system/ulib/zircon \
    system/ulib/fdio \
    system/ulib/unittest \

MODULE_STATIC_LIBS := \
    system/ulib/fbl \
    system/ulib/fuzz-utils \
    system/ulib/zx \
    system/ulib/zxcpp \

include make/module.mk
\
