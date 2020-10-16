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

#include <alibabacloud/dcdn/model/VerifyDcdnDomainOwnerRequest.h>

using AlibabaCloud::Dcdn::Model::VerifyDcdnDomainOwnerRequest;

VerifyDcdnDomainOwnerRequest::VerifyDcdnDomainOwnerRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "VerifyDcdnDomainOwner")
{
	setMethod(HttpRequest::Method::Post);
}

VerifyDcdnDomainOwnerRequest::~VerifyDcdnDomainOwnerRequest()
{}

std::string VerifyDcdnDomainOwnerRequest::getVerifyType()const
{
	return verifyType_;
}

void VerifyDcdnDomainOwnerRequest::setVerifyType(const std::string& verifyType)
{
	verifyType_ = verifyType;
	setParameter("VerifyType", verifyType);
}

std::string VerifyDcdnDomainOwnerRequest::getDomainName()const
{
	return domainName_;
}

void VerifyDcdnDomainOwnerRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long VerifyDcdnDomainOwnerRequest::getOwnerId()const
{
	return ownerId_;
}

void VerifyDcdnDomainOwnerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

