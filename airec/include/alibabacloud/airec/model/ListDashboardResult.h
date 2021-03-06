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

#ifndef ALIBABACLOUD_AIREC_MODEL_LISTDASHBOARDRESULT_H_
#define ALIBABACLOUD_AIREC_MODEL_LISTDASHBOARDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/airec/AirecExport.h>

namespace AlibabaCloud
{
	namespace Airec
	{
		namespace Model
		{
			class ALIBABACLOUD_AIREC_EXPORT ListDashboardResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct ListItem
					{
						float ctr;
						std::string sceneId;
						long uv;
						long clickUser;
						float perUvBhv;
						float perUvClick;
						float uvCtr;
						long pv;
						long activeItem;
						std::string traceId;
						long click;
						long bizDate;
					};
					int num;
					std::vector<ListItem> list;
				};


				ListDashboardResult();
				explicit ListDashboardResult(const std::string &payload);
				~ListDashboardResult();
				std::string getMessage()const;
				std::string getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AIREC_MODEL_LISTDASHBOARDRESULT_H_