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

#include <alibabacloud/cas/model/DescribeOrderDocumentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cas;
using namespace AlibabaCloud::Cas::Model;

DescribeOrderDocumentResult::DescribeOrderDocumentResult() :
	ServiceResult()
{}

DescribeOrderDocumentResult::DescribeOrderDocumentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOrderDocumentResult::~DescribeOrderDocumentResult()
{}

void DescribeOrderDocumentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allOrderDocumentListNode = value["OrderDocumentList"]["OrderDocument"];
	for (auto valueOrderDocumentListOrderDocument : allOrderDocumentListNode)
	{
		OrderDocument orderDocumentListObject;
		if(!valueOrderDocumentListOrderDocument["DocumentType"].isNull())
			orderDocumentListObject.documentType = std::stoi(valueOrderDocumentListOrderDocument["DocumentType"].asString());
		if(!valueOrderDocumentListOrderDocument["TplDocNote"].isNull())
			orderDocumentListObject.tplDocNote = valueOrderDocumentListOrderDocument["TplDocNote"].asString();
		if(!valueOrderDocumentListOrderDocument["TplDocOssKey"].isNull())
			orderDocumentListObject.tplDocOssKey = valueOrderDocumentListOrderDocument["TplDocOssKey"].asString();
		if(!valueOrderDocumentListOrderDocument["OrderDocOssKey"].isNull())
			orderDocumentListObject.orderDocOssKey = valueOrderDocumentListOrderDocument["OrderDocOssKey"].asString();
		if(!valueOrderDocumentListOrderDocument["OrderDocDate"].isNull())
			orderDocumentListObject.orderDocDate = std::stol(valueOrderDocumentListOrderDocument["OrderDocDate"].asString());
		if(!valueOrderDocumentListOrderDocument["OrderDocExt"].isNull())
			orderDocumentListObject.orderDocExt = valueOrderDocumentListOrderDocument["OrderDocExt"].asString();
		orderDocumentList_.push_back(orderDocumentListObject);
	}

}

std::vector<DescribeOrderDocumentResult::OrderDocument> DescribeOrderDocumentResult::getOrderDocumentList()const
{
	return orderDocumentList_;
}

