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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEPRIVILEGESREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribePrivilegesRequest : public RpcServiceRequest
			{

			public:
				DescribePrivilegesRequest();
				~DescribePrivilegesRequest();

				int getAccountType()const;
				void setAccountType(int accountType);
				long getAccountId()const;
				void setAccountId(long accountId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getKey()const;
				void setKey(const std::string& key);
				long getUseAccountId()const;
				void setUseAccountId(long useAccountId);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				int getCurrentPage()const;
				void setCurrentPage(int currentPage);
				std::string getDataTypeIds()const;
				void setDataTypeIds(const std::string& dataTypeIds);

            private:
				int accountType_;
				long accountId_;
				std::string sourceIp_;
				int pageSize_;
				std::string lang_;
				std::string key_;
				long useAccountId_;
				int featureType_;
				int currentPage_;
				std::string dataTypeIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEPRIVILEGESREQUEST_H_