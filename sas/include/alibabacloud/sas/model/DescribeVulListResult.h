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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEVULLISTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEVULLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeVulListResult : public ServiceResult
			{
			public:
				struct VulRecord
				{
					struct ExtendContentJson
					{
						struct Necessity
						{
							std::string status;
							std::string total_score;
							std::string gmt_create;
							std::string cvss_factor;
							std::string time_factor;
							std::string is_calc;
							std::string enviroment_factor;
							std::string assets_factor;
						};
						struct RpmEntity
						{
							std::string path;
							std::string updateCmd;
							std::string version;
							std::string fullVersion;
							std::string matchDetail;
							std::string name;
						};
						int status;
						std::vector<std::string> cveList;
						std::string os;
						std::string aliasName;
						Necessity necessity;
						long lastTs;
						std::vector<RpmEntity> rpmEntityList;
						std::string tag;
						std::string osRelease;
						std::string absolutePath;
						long primaryId;
					};
					int status;
					std::string instanceId;
					std::string ip;
					std::string osVersion;
					long lastTs;
					std::string necessity;
					std::string needReboot;
					std::string resultMessage;
					std::string intranetIp;
					std::string name;
					int groupId;
					long repairTs;
					std::string instanceName;
					std::string type;
					long firstTs;
					std::string uuid;
					std::string related;
					long modifyTs;
					std::string internetIp;
					std::string aliasName;
					std::string tag;
					ExtendContentJson extendContentJson;
					long primaryId;
					std::string resultCode;
				};


				DescribeVulListResult();
				explicit DescribeVulListResult(const std::string &payload);
				~DescribeVulListResult();
				int getTotalCount()const;
				std::vector<VulRecord> getVulRecords()const;
				int getPageSize()const;
				int getCurrentPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<VulRecord> vulRecords_;
				int pageSize_;
				int currentPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEVULLISTRESULT_H_