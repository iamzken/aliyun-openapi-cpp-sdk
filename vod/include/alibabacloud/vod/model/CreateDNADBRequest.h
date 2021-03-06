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

#ifndef ALIBABACLOUD_VOD_MODEL_CREATEDNADBREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_CREATEDNADBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT CreateDNADBRequest : public RpcServiceRequest
			{

			public:
				CreateDNADBRequest();
				~CreateDNADBRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDBRegion()const;
				void setDBRegion(const std::string& dBRegion);
				std::string getDBDescription()const;
				void setDBDescription(const std::string& dBDescription);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDBName()const;
				void setDBName(const std::string& dBName);
				std::string getDBType()const;
				void setDBType(const std::string& dBType);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string dBRegion_;
				std::string dBDescription_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string dBName_;
				std::string dBType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_CREATEDNADBREQUEST_H_