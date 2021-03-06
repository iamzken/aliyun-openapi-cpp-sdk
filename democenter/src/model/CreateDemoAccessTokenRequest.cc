/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/democenter/model/CreateDemoAccessTokenRequest.h>

using AlibabaCloud::DemoCenter::Model::CreateDemoAccessTokenRequest;

CreateDemoAccessTokenRequest::CreateDemoAccessTokenRequest() :
	RpcServiceRequest("democenter", "2020-01-21", "CreateDemoAccessToken")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDemoAccessTokenRequest::~CreateDemoAccessTokenRequest()
{}

int CreateDemoAccessTokenRequest::getEdition()const
{
	return edition_;
}

void CreateDemoAccessTokenRequest::setEdition(int edition)
{
	edition_ = edition;
	setBodyParameter("Edition", std::to_string(edition));
}

long CreateDemoAccessTokenRequest::getDemoId()const
{
	return demoId_;
}

void CreateDemoAccessTokenRequest::setDemoId(long demoId)
{
	demoId_ = demoId;
	setBodyParameter("DemoId", std::to_string(demoId));
}

