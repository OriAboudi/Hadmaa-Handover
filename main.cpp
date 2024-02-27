//
//  hello.cc
//
//  Copyright (c) 2019 Yuji Hirose. All rights reserved.
//  MIT License
//

#include <httplib.h>
using namespace httplib;

int main(void) {
  Server svr;

  svr.Get("/", [](const Request & /*req*/, Response &res) {
    res.set_content("server is runing!", "text/plain");
  });

  svr.listen("0.0.0.0", 8080);
}