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

#ifndef ALIBABACLOUD_CS_MODEL_GETKUBERNETESTRIGGERREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_GETKUBERNETESTRIGGERREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/cs/CSExport.h>

namespace AlibabaCloud
{
	namespace CS
	{
		namespace Model
		{
			class ALIBABACLOUD_CS_EXPORT GetKubernetesTriggerRequest : public RoaServiceRequest
			{

			public:
				GetKubernetesTriggerRequest();
				~GetKubernetesTriggerRequest();

				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getType()const;
				void setType(const std::string& type);

            private:
				std::string _namespace_;
				std::string name_;
				std::string clusterId_;
				std::string type_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_GETKUBERNETESTRIGGERREQUEST_H_