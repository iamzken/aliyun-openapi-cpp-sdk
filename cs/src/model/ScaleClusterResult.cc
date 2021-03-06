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

#include <alibabacloud/cs/model/ScaleClusterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CS;
using namespace AlibabaCloud::CS::Model;

ScaleClusterResult::ScaleClusterResult() :
	ServiceResult()
{}

ScaleClusterResult::ScaleClusterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ScaleClusterResult::~ScaleClusterResult()
{}

void ScaleClusterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["cluster_id"].isNull())
		cluster_id_ = value["cluster_id"].asString();
	if(!value["task_id"].isNull())
		task_id_ = value["task_id"].asString();
	if(!value["request_id"].isNull())
		request_id_ = value["request_id"].asString();

}

std::string ScaleClusterResult::getRequest_id()const
{
	return request_id_;
}

std::string ScaleClusterResult::getCluster_id()const
{
	return cluster_id_;
}

std::string ScaleClusterResult::getTask_id()const
{
	return task_id_;
}

