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

#include <alibabacloud/ivpd/model/RecognizeImageStyleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivpd;
using namespace AlibabaCloud::Ivpd::Model;

RecognizeImageStyleResult::RecognizeImageStyleResult() :
	ServiceResult()
{}

RecognizeImageStyleResult::RecognizeImageStyleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RecognizeImageStyleResult::~RecognizeImageStyleResult()
{}

void RecognizeImageStyleResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
		auto allStyles = dataNode["Styles"]["Style"];
		for (auto value : allStyles)
			data_.styles.push_back(value.asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string RecognizeImageStyleResult::getMessage()const
{
	return message_;
}

RecognizeImageStyleResult::Data RecognizeImageStyleResult::getData()const
{
	return data_;
}

std::string RecognizeImageStyleResult::getCode()const
{
	return code_;
}

