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

#include <alibabacloud/kms/model/ExportCertificateRequest.h>

using AlibabaCloud::Kms::Model::ExportCertificateRequest;

ExportCertificateRequest::ExportCertificateRequest() :
	RpcServiceRequest("kms", "2016-01-20", "ExportCertificate")
{
	setMethod(HttpRequest::Method::Post);
}

ExportCertificateRequest::~ExportCertificateRequest()
{}

std::string ExportCertificateRequest::getCertificateId()const
{
	return certificateId_;
}

void ExportCertificateRequest::setCertificateId(const std::string& certificateId)
{
	certificateId_ = certificateId;
	setParameter("CertificateId", certificateId);
}

std::string ExportCertificateRequest::getPassphrase()const
{
	return passphrase_;
}

void ExportCertificateRequest::setPassphrase(const std::string& passphrase)
{
	passphrase_ = passphrase;
	setParameter("Passphrase", passphrase);
}

std::string ExportCertificateRequest::getExportFormat()const
{
	return exportFormat_;
}

void ExportCertificateRequest::setExportFormat(const std::string& exportFormat)
{
	exportFormat_ = exportFormat;
	setParameter("ExportFormat", exportFormat);
}

