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

#ifndef ALIBABACLOUD_CS_MODEL_SCALECLUSTERREQUEST_H_
#define ALIBABACLOUD_CS_MODEL_SCALECLUSTERREQUEST_H_

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
			class ALIBABACLOUD_CS_EXPORT ScaleClusterRequest : public RoaServiceRequest
			{

			public:
				ScaleClusterRequest();
				~ScaleClusterRequest();

				std::string getKey_pair()const;
				void setKey_pair(const std::string& key_pair);
				bool getWorker_data_disk()const;
				void setWorker_data_disk(bool worker_data_disk);
				long getCount()const;
				void setCount(long count);
				std::string getWorker_system_disk_category()const;
				void setWorker_system_disk_category(const std::string& worker_system_disk_category);
				bool getCloud_monitor_flags()const;
				void setCloud_monitor_flags(bool cloud_monitor_flags);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getWorker_period_unit()const;
				void setWorker_period_unit(const std::string& worker_period_unit);
				bool getWorker_auto_renew()const;
				void setWorker_auto_renew(bool worker_auto_renew);
				long getWorker_auto_renew_period()const;
				void setWorker_auto_renew_period(long worker_auto_renew_period);
				long getWorker_period()const;
				void setWorker_period(long worker_period);
				std::string getLogin_password()const;
				void setLogin_password(const std::string& login_password);
				long getWorker_system_disk_size()const;
				void setWorker_system_disk_size(long worker_system_disk_size);
				std::string getCpu_policy()const;
				void setCpu_policy(const std::string& cpu_policy);
				bool getDisable_rollback()const;
				void setDisable_rollback(bool disable_rollback);
				std::string getWorker_instance_charge_type()const;
				void setWorker_instance_charge_type(const std::string& worker_instance_charge_type);

            private:
				std::string key_pair_;
				bool worker_data_disk_;
				long count_;
				std::string worker_system_disk_category_;
				bool cloud_monitor_flags_;
				std::string clusterId_;
				std::string worker_period_unit_;
				bool worker_auto_renew_;
				long worker_auto_renew_period_;
				long worker_period_;
				std::string login_password_;
				long worker_system_disk_size_;
				std::string cpu_policy_;
				bool disable_rollback_;
				std::string worker_instance_charge_type_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CS_MODEL_SCALECLUSTERREQUEST_H_