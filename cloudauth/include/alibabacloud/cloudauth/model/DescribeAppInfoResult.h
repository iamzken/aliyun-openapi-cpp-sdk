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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEAPPINFORESULT_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEAPPINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT DescribeAppInfoResult : public ServiceResult
			{
			public:
				struct AppInfo
				{
					struct PackageInfo
					{
						std::string version;
					};
					struct DebugPackageInfo
					{
						std::string version;
					};
					std::string startDate;
					int type;
					DebugPackageInfo debugPackageInfo;
					std::string packageName;
					PackageInfo packageInfo;
					long id;
					std::string icon;
					std::string endDate;
					std::string name;
				};


				DescribeAppInfoResult();
				explicit DescribeAppInfoResult(const std::string &payload);
				~DescribeAppInfoResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getCurrentPage()const;
				std::vector<AppInfo> getAppInfoList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int currentPage_;
				std::vector<AppInfo> appInfoList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_DESCRIBEAPPINFORESULT_H_