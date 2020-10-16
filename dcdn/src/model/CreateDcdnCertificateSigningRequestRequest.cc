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

#include <alibabacloud/dcdn/model/CreateDcdnCertificateSigningRequestRequest.h>

using AlibabaCloud::Dcdn::Model::CreateDcdnCertificateSigningRequestRequest;

CreateDcdnCertificateSigningRequestRequest::CreateDcdnCertificateSigningRequestRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "CreateDcdnCertificateSigningRequest")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDcdnCertificateSigningRequestRequest::~CreateDcdnCertificateSigningRequestRequest()
{}

std::string CreateDcdnCertificateSigningRequestRequest::getCountry()const
{
	return country_;
}

void CreateDcdnCertificateSigningRequestRequest::setCountry(const std::string& country)
{
	country_ = country;
	setParameter("Country", country);
}

std::string CreateDcdnCertificateSigningRequestRequest::getCity()const
{
	return city_;
}

void CreateDcdnCertificateSigningRequestRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

std::string CreateDcdnCertificateSigningRequestRequest::getCommonName()const
{
	return commonName_;
}

void CreateDcdnCertificateSigningRequestRequest::setCommonName(const std::string& commonName)
{
	commonName_ = commonName;
	setParameter("CommonName", commonName);
}

std::string CreateDcdnCertificateSigningRequestRequest::getState()const
{
	return state_;
}

void CreateDcdnCertificateSigningRequestRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

std::string CreateDcdnCertificateSigningRequestRequest::getEmail()const
{
	return email_;
}

void CreateDcdnCertificateSigningRequestRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

std::string CreateDcdnCertificateSigningRequestRequest::getSANs()const
{
	return sANs_;
}

void CreateDcdnCertificateSigningRequestRequest::setSANs(const std::string& sANs)
{
	sANs_ = sANs;
	setParameter("SANs", sANs);
}

long CreateDcdnCertificateSigningRequestRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDcdnCertificateSigningRequestRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDcdnCertificateSigningRequestRequest::getOrganization()const
{
	return organization_;
}

void CreateDcdnCertificateSigningRequestRequest::setOrganization(const std::string& organization)
{
	organization_ = organization;
	setParameter("Organization", organization);
}

std::string CreateDcdnCertificateSigningRequestRequest::getOrganizationUnit()const
{
	return organizationUnit_;
}

void CreateDcdnCertificateSigningRequestRequest::setOrganizationUnit(const std::string& organizationUnit)
{
	organizationUnit_ = organizationUnit;
	setParameter("OrganizationUnit", organizationUnit);
}

