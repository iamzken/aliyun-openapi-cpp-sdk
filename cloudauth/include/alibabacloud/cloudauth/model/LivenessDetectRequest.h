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

#ifndef ALIBABACLOUD_CLOUDAUTH_MODEL_LIVENESSDETECTREQUEST_H_
#define ALIBABACLOUD_CLOUDAUTH_MODEL_LIVENESSDETECTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudauth/CloudauthExport.h>

namespace AlibabaCloud
{
	namespace Cloudauth
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAUTH_EXPORT LivenessDetectRequest : public RpcServiceRequest
			{

			public:
				LivenessDetectRequest();
				~LivenessDetectRequest();

				std::string getMediaCategory()const;
				void setMediaCategory(const std::string& mediaCategory);
				std::string getMediaUrl()const;
				void setMediaUrl(const std::string& mediaUrl);
				std::string getBizType()const;
				void setBizType(const std::string& bizType);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getMediaFile()const;
				void setMediaFile(const std::string& mediaFile);

            private:
				std::string mediaCategory_;
				std::string mediaUrl_;
				std::string bizType_;
				std::string bizId_;
				std::string mediaFile_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAUTH_MODEL_LIVENESSDETECTREQUEST_H_