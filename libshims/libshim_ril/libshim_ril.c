//
// Copyright (C) 2022 The LineageOS Project
// SPDX-License-Identifier: Apache-2.0
//

void* _ZN7android11AudioSystem16addErrorCallbackEPFviE(void *cb);

void _ZN7android11AudioSystem16setErrorCallbackEPFviE(void *cb) {
  _ZN7android11AudioSystem16addErrorCallbackEPFviE(cb);
}
