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

#ifndef ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_GETALGORITHMHISTORYRESULTREQUEST_H_
#define ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_GETALGORITHMHISTORYRESULTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/industry-brain/Industry_brainExport.h>

namespace AlibabaCloud
{
	namespace Industry_brain
	{
		namespace Model
		{
			class ALIBABACLOUD_INDUSTRY_BRAIN_EXPORT GetAlgorithmHistoryResultRequest : public RpcServiceRequest
			{

			public:
				GetAlgorithmHistoryResultRequest();
				~GetAlgorithmHistoryResultRequest();

				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getServiceId()const;
				void setServiceId(const std::string& serviceId);

            private:
				std::string endTime_;
				std::string startTime_;
				std::string serviceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_GETALGORITHMHISTORYRESULTREQUEST_H_