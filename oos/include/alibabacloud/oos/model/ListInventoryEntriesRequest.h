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

#ifndef ALIBABACLOUD_OOS_MODEL_LISTINVENTORYENTRIESREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_LISTINVENTORYENTRIESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT ListInventoryEntriesRequest : public RpcServiceRequest
			{
			public:
				struct Filter
				{
					std::string name;
					std::vector<std::string> value;
					std::string _operator;
				};

			public:
				ListInventoryEntriesRequest();
				~ListInventoryEntriesRequest();

				std::vector<Filter> getFilter()const;
				void setFilter(const std::vector<Filter>& filter);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getTypeName()const;
				void setTypeName(const std::string& typeName);

            private:
				std::vector<Filter> filter_;
				std::string instanceId_;
				std::string nextToken_;
				int maxResults_;
				std::string typeName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_LISTINVENTORYENTRIESREQUEST_H_