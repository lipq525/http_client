// http_client.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "httpclient.hpp"

int main()
{
    std::cout << "Hello World!\n";
	System::Net::HttpGobal::Initialize();

   std::string uri = "https://www.baidu.com";
   System::Net::HttpWebRequest* req = System::Net::HttpWebRequest::Create(uri);
   System::Net::HttpWebResponse* resp = req->GetResponse();

   std::cout << resp->GetHeader(System::Net::HttpHeader::ContentLength) << std::endl;
   std::cout << resp->GetResponseStream().str() << std::endl;

   std::string str = resp->GetResponseStream().str();
   std::cout << str << std::endl;
   System::Net::HttpGobal::Destroy();
}

