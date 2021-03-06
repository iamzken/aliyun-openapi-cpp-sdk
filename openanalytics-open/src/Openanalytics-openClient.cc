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

#include <alibabacloud/openanalytics-open/Openanalytics_openClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Openanalytics_open;
using namespace AlibabaCloud::Openanalytics_open::Model;

namespace
{
	const std::string SERVICE_NAME = "openanalytics-open";
}

Openanalytics_openClient::Openanalytics_openClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "openanalytics");
}

Openanalytics_openClient::Openanalytics_openClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "openanalytics");
}

Openanalytics_openClient::Openanalytics_openClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "openanalytics");
}

Openanalytics_openClient::~Openanalytics_openClient()
{}

Openanalytics_openClient::AddAccountOutcome Openanalytics_openClient::addAccount(const AddAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddAccountOutcome(AddAccountResult(outcome.result()));
	else
		return AddAccountOutcome(outcome.error());
}

void Openanalytics_openClient::addAccountAsync(const AddAccountRequest& request, const AddAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AddAccountOutcomeCallable Openanalytics_openClient::addAccountCallable(const AddAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddAccountOutcome()>>(
			[this, request]()
			{
			return this->addAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::AddEndPointOutcome Openanalytics_openClient::addEndPoint(const AddEndPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddEndPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddEndPointOutcome(AddEndPointResult(outcome.result()));
	else
		return AddEndPointOutcome(outcome.error());
}

void Openanalytics_openClient::addEndPointAsync(const AddEndPointRequest& request, const AddEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addEndPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AddEndPointOutcomeCallable Openanalytics_openClient::addEndPointCallable(const AddEndPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddEndPointOutcome()>>(
			[this, request]()
			{
			return this->addEndPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::AddPartitionsOutcome Openanalytics_openClient::addPartitions(const AddPartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddPartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddPartitionsOutcome(AddPartitionsResult(outcome.result()));
	else
		return AddPartitionsOutcome(outcome.error());
}

void Openanalytics_openClient::addPartitionsAsync(const AddPartitionsRequest& request, const AddPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addPartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AddPartitionsOutcomeCallable Openanalytics_openClient::addPartitionsCallable(const AddPartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddPartitionsOutcome()>>(
			[this, request]()
			{
			return this->addPartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::AlterDatabaseOutcome Openanalytics_openClient::alterDatabase(const AlterDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AlterDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AlterDatabaseOutcome(AlterDatabaseResult(outcome.result()));
	else
		return AlterDatabaseOutcome(outcome.error());
}

void Openanalytics_openClient::alterDatabaseAsync(const AlterDatabaseRequest& request, const AlterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, alterDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AlterDatabaseOutcomeCallable Openanalytics_openClient::alterDatabaseCallable(const AlterDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AlterDatabaseOutcome()>>(
			[this, request]()
			{
			return this->alterDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::AlterTableOutcome Openanalytics_openClient::alterTable(const AlterTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AlterTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AlterTableOutcome(AlterTableResult(outcome.result()));
	else
		return AlterTableOutcome(outcome.error());
}

void Openanalytics_openClient::alterTableAsync(const AlterTableRequest& request, const AlterTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, alterTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::AlterTableOutcomeCallable Openanalytics_openClient::alterTableCallable(const AlterTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AlterTableOutcome()>>(
			[this, request]()
			{
			return this->alterTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::BindingRamUidToDlaAccountOutcome Openanalytics_openClient::bindingRamUidToDlaAccount(const BindingRamUidToDlaAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindingRamUidToDlaAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindingRamUidToDlaAccountOutcome(BindingRamUidToDlaAccountResult(outcome.result()));
	else
		return BindingRamUidToDlaAccountOutcome(outcome.error());
}

void Openanalytics_openClient::bindingRamUidToDlaAccountAsync(const BindingRamUidToDlaAccountRequest& request, const BindingRamUidToDlaAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindingRamUidToDlaAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::BindingRamUidToDlaAccountOutcomeCallable Openanalytics_openClient::bindingRamUidToDlaAccountCallable(const BindingRamUidToDlaAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindingRamUidToDlaAccountOutcome()>>(
			[this, request]()
			{
			return this->bindingRamUidToDlaAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CreateDatabaseOutcome Openanalytics_openClient::createDatabase(const CreateDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateDatabaseOutcome(CreateDatabaseResult(outcome.result()));
	else
		return CreateDatabaseOutcome(outcome.error());
}

void Openanalytics_openClient::createDatabaseAsync(const CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CreateDatabaseOutcomeCallable Openanalytics_openClient::createDatabaseCallable(const CreateDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateDatabaseOutcome()>>(
			[this, request]()
			{
			return this->createDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CreateInstanceOutcome Openanalytics_openClient::createInstance(const CreateInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateInstanceOutcome(CreateInstanceResult(outcome.result()));
	else
		return CreateInstanceOutcome(outcome.error());
}

void Openanalytics_openClient::createInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CreateInstanceOutcomeCallable Openanalytics_openClient::createInstanceCallable(const CreateInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
			[this, request]()
			{
			return this->createInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CreateServiceLinkedRoleOutcome Openanalytics_openClient::createServiceLinkedRole(const CreateServiceLinkedRoleRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateServiceLinkedRoleOutcome(CreateServiceLinkedRoleResult(outcome.result()));
	else
		return CreateServiceLinkedRoleOutcome(outcome.error());
}

void Openanalytics_openClient::createServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createServiceLinkedRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CreateServiceLinkedRoleOutcomeCallable Openanalytics_openClient::createServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
			[this, request]()
			{
			return this->createServiceLinkedRole(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CreateTableOutcome Openanalytics_openClient::createTable(const CreateTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateTableOutcome(CreateTableResult(outcome.result()));
	else
		return CreateTableOutcome(outcome.error());
}

void Openanalytics_openClient::createTableAsync(const CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CreateTableOutcomeCallable Openanalytics_openClient::createTableCallable(const CreateTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateTableOutcome()>>(
			[this, request]()
			{
			return this->createTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CreateUserNetConfigOutcome Openanalytics_openClient::createUserNetConfig(const CreateUserNetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateUserNetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateUserNetConfigOutcome(CreateUserNetConfigResult(outcome.result()));
	else
		return CreateUserNetConfigOutcome(outcome.error());
}

void Openanalytics_openClient::createUserNetConfigAsync(const CreateUserNetConfigRequest& request, const CreateUserNetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createUserNetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CreateUserNetConfigOutcomeCallable Openanalytics_openClient::createUserNetConfigCallable(const CreateUserNetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateUserNetConfigOutcome()>>(
			[this, request]()
			{
			return this->createUserNetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::CreateVirtualClusterForSparkOutcome Openanalytics_openClient::createVirtualClusterForSpark(const CreateVirtualClusterForSparkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateVirtualClusterForSparkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateVirtualClusterForSparkOutcome(CreateVirtualClusterForSparkResult(outcome.result()));
	else
		return CreateVirtualClusterForSparkOutcome(outcome.error());
}

void Openanalytics_openClient::createVirtualClusterForSparkAsync(const CreateVirtualClusterForSparkRequest& request, const CreateVirtualClusterForSparkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createVirtualClusterForSpark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::CreateVirtualClusterForSparkOutcomeCallable Openanalytics_openClient::createVirtualClusterForSparkCallable(const CreateVirtualClusterForSparkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateVirtualClusterForSparkOutcome()>>(
			[this, request]()
			{
			return this->createVirtualClusterForSpark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DecodeStsTokenOutcome Openanalytics_openClient::decodeStsToken(const DecodeStsTokenRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DecodeStsTokenOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DecodeStsTokenOutcome(DecodeStsTokenResult(outcome.result()));
	else
		return DecodeStsTokenOutcome(outcome.error());
}

void Openanalytics_openClient::decodeStsTokenAsync(const DecodeStsTokenRequest& request, const DecodeStsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, decodeStsToken(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DecodeStsTokenOutcomeCallable Openanalytics_openClient::decodeStsTokenCallable(const DecodeStsTokenRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DecodeStsTokenOutcome()>>(
			[this, request]()
			{
			return this->decodeStsToken(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DeleteAccountOutcome Openanalytics_openClient::deleteAccount(const DeleteAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteAccountOutcome(DeleteAccountResult(outcome.result()));
	else
		return DeleteAccountOutcome(outcome.error());
}

void Openanalytics_openClient::deleteAccountAsync(const DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DeleteAccountOutcomeCallable Openanalytics_openClient::deleteAccountCallable(const DeleteAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteAccountOutcome()>>(
			[this, request]()
			{
			return this->deleteAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DeleteUserNetConfigOutcome Openanalytics_openClient::deleteUserNetConfig(const DeleteUserNetConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserNetConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserNetConfigOutcome(DeleteUserNetConfigResult(outcome.result()));
	else
		return DeleteUserNetConfigOutcome(outcome.error());
}

void Openanalytics_openClient::deleteUserNetConfigAsync(const DeleteUserNetConfigRequest& request, const DeleteUserNetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUserNetConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DeleteUserNetConfigOutcomeCallable Openanalytics_openClient::deleteUserNetConfigCallable(const DeleteUserNetConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserNetConfigOutcome()>>(
			[this, request]()
			{
			return this->deleteUserNetConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DescribeCapacityOutcome Openanalytics_openClient::describeCapacity(const DescribeCapacityRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeCapacityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeCapacityOutcome(DescribeCapacityResult(outcome.result()));
	else
		return DescribeCapacityOutcome(outcome.error());
}

void Openanalytics_openClient::describeCapacityAsync(const DescribeCapacityRequest& request, const DescribeCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeCapacity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DescribeCapacityOutcomeCallable Openanalytics_openClient::describeCapacityCallable(const DescribeCapacityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeCapacityOutcome()>>(
			[this, request]()
			{
			return this->describeCapacity(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DescribeDataLakeAnalyticsServiceOutcome Openanalytics_openClient::describeDataLakeAnalyticsService(const DescribeDataLakeAnalyticsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeDataLakeAnalyticsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeDataLakeAnalyticsServiceOutcome(DescribeDataLakeAnalyticsServiceResult(outcome.result()));
	else
		return DescribeDataLakeAnalyticsServiceOutcome(outcome.error());
}

void Openanalytics_openClient::describeDataLakeAnalyticsServiceAsync(const DescribeDataLakeAnalyticsServiceRequest& request, const DescribeDataLakeAnalyticsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeDataLakeAnalyticsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DescribeDataLakeAnalyticsServiceOutcomeCallable Openanalytics_openClient::describeDataLakeAnalyticsServiceCallable(const DescribeDataLakeAnalyticsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeDataLakeAnalyticsServiceOutcome()>>(
			[this, request]()
			{
			return this->describeDataLakeAnalyticsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DescribeRegionListOutcome Openanalytics_openClient::describeRegionList(const DescribeRegionListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionListOutcome(DescribeRegionListResult(outcome.result()));
	else
		return DescribeRegionListOutcome(outcome.error());
}

void Openanalytics_openClient::describeRegionListAsync(const DescribeRegionListRequest& request, const DescribeRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegionList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DescribeRegionListOutcomeCallable Openanalytics_openClient::describeRegionListCallable(const DescribeRegionListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionListOutcome()>>(
			[this, request]()
			{
			return this->describeRegionList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DescribeVirtualClusterOutcome Openanalytics_openClient::describeVirtualCluster(const DescribeVirtualClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVirtualClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVirtualClusterOutcome(DescribeVirtualClusterResult(outcome.result()));
	else
		return DescribeVirtualClusterOutcome(outcome.error());
}

void Openanalytics_openClient::describeVirtualClusterAsync(const DescribeVirtualClusterRequest& request, const DescribeVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVirtualCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DescribeVirtualClusterOutcomeCallable Openanalytics_openClient::describeVirtualClusterCallable(const DescribeVirtualClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVirtualClusterOutcome()>>(
			[this, request]()
			{
			return this->describeVirtualCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DescribeVirtualClusterV2Outcome Openanalytics_openClient::describeVirtualClusterV2(const DescribeVirtualClusterV2Request &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeVirtualClusterV2Outcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeVirtualClusterV2Outcome(DescribeVirtualClusterV2Result(outcome.result()));
	else
		return DescribeVirtualClusterV2Outcome(outcome.error());
}

void Openanalytics_openClient::describeVirtualClusterV2Async(const DescribeVirtualClusterV2Request& request, const DescribeVirtualClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeVirtualClusterV2(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DescribeVirtualClusterV2OutcomeCallable Openanalytics_openClient::describeVirtualClusterV2Callable(const DescribeVirtualClusterV2Request &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeVirtualClusterV2Outcome()>>(
			[this, request]()
			{
			return this->describeVirtualClusterV2(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DestroyVirtualClusterOutcome Openanalytics_openClient::destroyVirtualCluster(const DestroyVirtualClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DestroyVirtualClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DestroyVirtualClusterOutcome(DestroyVirtualClusterResult(outcome.result()));
	else
		return DestroyVirtualClusterOutcome(outcome.error());
}

void Openanalytics_openClient::destroyVirtualClusterAsync(const DestroyVirtualClusterRequest& request, const DestroyVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, destroyVirtualCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DestroyVirtualClusterOutcomeCallable Openanalytics_openClient::destroyVirtualClusterCallable(const DestroyVirtualClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DestroyVirtualClusterOutcome()>>(
			[this, request]()
			{
			return this->destroyVirtualCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DropDatabaseOutcome Openanalytics_openClient::dropDatabase(const DropDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DropDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DropDatabaseOutcome(DropDatabaseResult(outcome.result()));
	else
		return DropDatabaseOutcome(outcome.error());
}

void Openanalytics_openClient::dropDatabaseAsync(const DropDatabaseRequest& request, const DropDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dropDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DropDatabaseOutcomeCallable Openanalytics_openClient::dropDatabaseCallable(const DropDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DropDatabaseOutcome()>>(
			[this, request]()
			{
			return this->dropDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DropPartitionOutcome Openanalytics_openClient::dropPartition(const DropPartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DropPartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DropPartitionOutcome(DropPartitionResult(outcome.result()));
	else
		return DropPartitionOutcome(outcome.error());
}

void Openanalytics_openClient::dropPartitionAsync(const DropPartitionRequest& request, const DropPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dropPartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DropPartitionOutcomeCallable Openanalytics_openClient::dropPartitionCallable(const DropPartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DropPartitionOutcome()>>(
			[this, request]()
			{
			return this->dropPartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::DropTableOutcome Openanalytics_openClient::dropTable(const DropTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DropTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DropTableOutcome(DropTableResult(outcome.result()));
	else
		return DropTableOutcome(outcome.error());
}

void Openanalytics_openClient::dropTableAsync(const DropTableRequest& request, const DropTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, dropTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::DropTableOutcomeCallable Openanalytics_openClient::dropTableCallable(const DropTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DropTableOutcome()>>(
			[this, request]()
			{
			return this->dropTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ForbidAutomaticMetaSyncAsIntegrationAccountOutcome Openanalytics_openClient::forbidAutomaticMetaSyncAsIntegrationAccount(const ForbidAutomaticMetaSyncAsIntegrationAccountRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ForbidAutomaticMetaSyncAsIntegrationAccountOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ForbidAutomaticMetaSyncAsIntegrationAccountOutcome(ForbidAutomaticMetaSyncAsIntegrationAccountResult(outcome.result()));
	else
		return ForbidAutomaticMetaSyncAsIntegrationAccountOutcome(outcome.error());
}

void Openanalytics_openClient::forbidAutomaticMetaSyncAsIntegrationAccountAsync(const ForbidAutomaticMetaSyncAsIntegrationAccountRequest& request, const ForbidAutomaticMetaSyncAsIntegrationAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, forbidAutomaticMetaSyncAsIntegrationAccount(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ForbidAutomaticMetaSyncAsIntegrationAccountOutcomeCallable Openanalytics_openClient::forbidAutomaticMetaSyncAsIntegrationAccountCallable(const ForbidAutomaticMetaSyncAsIntegrationAccountRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ForbidAutomaticMetaSyncAsIntegrationAccountOutcome()>>(
			[this, request]()
			{
			return this->forbidAutomaticMetaSyncAsIntegrationAccount(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetAllDatabasesOutcome Openanalytics_openClient::getAllDatabases(const GetAllDatabasesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllDatabasesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllDatabasesOutcome(GetAllDatabasesResult(outcome.result()));
	else
		return GetAllDatabasesOutcome(outcome.error());
}

void Openanalytics_openClient::getAllDatabasesAsync(const GetAllDatabasesRequest& request, const GetAllDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllDatabases(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetAllDatabasesOutcomeCallable Openanalytics_openClient::getAllDatabasesCallable(const GetAllDatabasesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllDatabasesOutcome()>>(
			[this, request]()
			{
			return this->getAllDatabases(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetAllTablesOutcome Openanalytics_openClient::getAllTables(const GetAllTablesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllTablesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllTablesOutcome(GetAllTablesResult(outcome.result()));
	else
		return GetAllTablesOutcome(outcome.error());
}

void Openanalytics_openClient::getAllTablesAsync(const GetAllTablesRequest& request, const GetAllTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllTables(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetAllTablesOutcomeCallable Openanalytics_openClient::getAllTablesCallable(const GetAllTablesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllTablesOutcome()>>(
			[this, request]()
			{
			return this->getAllTables(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetAllowIPOutcome Openanalytics_openClient::getAllowIP(const GetAllowIPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetAllowIPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetAllowIPOutcome(GetAllowIPResult(outcome.result()));
	else
		return GetAllowIPOutcome(outcome.error());
}

void Openanalytics_openClient::getAllowIPAsync(const GetAllowIPRequest& request, const GetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getAllowIP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetAllowIPOutcomeCallable Openanalytics_openClient::getAllowIPCallable(const GetAllowIPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetAllowIPOutcome()>>(
			[this, request]()
			{
			return this->getAllowIP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetConsolePermissionOutcome Openanalytics_openClient::getConsolePermission(const GetConsolePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetConsolePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetConsolePermissionOutcome(GetConsolePermissionResult(outcome.result()));
	else
		return GetConsolePermissionOutcome(outcome.error());
}

void Openanalytics_openClient::getConsolePermissionAsync(const GetConsolePermissionRequest& request, const GetConsolePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getConsolePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetConsolePermissionOutcomeCallable Openanalytics_openClient::getConsolePermissionCallable(const GetConsolePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetConsolePermissionOutcome()>>(
			[this, request]()
			{
			return this->getConsolePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetDLAServiceStatusOutcome Openanalytics_openClient::getDLAServiceStatus(const GetDLAServiceStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDLAServiceStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDLAServiceStatusOutcome(GetDLAServiceStatusResult(outcome.result()));
	else
		return GetDLAServiceStatusOutcome(outcome.error());
}

void Openanalytics_openClient::getDLAServiceStatusAsync(const GetDLAServiceStatusRequest& request, const GetDLAServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDLAServiceStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetDLAServiceStatusOutcomeCallable Openanalytics_openClient::getDLAServiceStatusCallable(const GetDLAServiceStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDLAServiceStatusOutcome()>>(
			[this, request]()
			{
			return this->getDLAServiceStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetDatabaseOutcome Openanalytics_openClient::getDatabase(const GetDatabaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetDatabaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetDatabaseOutcome(GetDatabaseResult(outcome.result()));
	else
		return GetDatabaseOutcome(outcome.error());
}

void Openanalytics_openClient::getDatabaseAsync(const GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getDatabase(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetDatabaseOutcomeCallable Openanalytics_openClient::getDatabaseCallable(const GetDatabaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetDatabaseOutcome()>>(
			[this, request]()
			{
			return this->getDatabase(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetEndPointOutcome Openanalytics_openClient::getEndPoint(const GetEndPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEndPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEndPointOutcome(GetEndPointResult(outcome.result()));
	else
		return GetEndPointOutcome(outcome.error());
}

void Openanalytics_openClient::getEndPointAsync(const GetEndPointRequest& request, const GetEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEndPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetEndPointOutcomeCallable Openanalytics_openClient::getEndPointCallable(const GetEndPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEndPointOutcome()>>(
			[this, request]()
			{
			return this->getEndPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetEndPointByDomainOutcome Openanalytics_openClient::getEndPointByDomain(const GetEndPointByDomainRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetEndPointByDomainOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetEndPointByDomainOutcome(GetEndPointByDomainResult(outcome.result()));
	else
		return GetEndPointByDomainOutcome(outcome.error());
}

void Openanalytics_openClient::getEndPointByDomainAsync(const GetEndPointByDomainRequest& request, const GetEndPointByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getEndPointByDomain(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetEndPointByDomainOutcomeCallable Openanalytics_openClient::getEndPointByDomainCallable(const GetEndPointByDomainRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetEndPointByDomainOutcome()>>(
			[this, request]()
			{
			return this->getEndPointByDomain(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetJobDetailOutcome Openanalytics_openClient::getJobDetail(const GetJobDetailRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobDetailOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobDetailOutcome(GetJobDetailResult(outcome.result()));
	else
		return GetJobDetailOutcome(outcome.error());
}

void Openanalytics_openClient::getJobDetailAsync(const GetJobDetailRequest& request, const GetJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobDetail(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetJobDetailOutcomeCallable Openanalytics_openClient::getJobDetailCallable(const GetJobDetailRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobDetailOutcome()>>(
			[this, request]()
			{
			return this->getJobDetail(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetJobLogOutcome Openanalytics_openClient::getJobLog(const GetJobLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobLogOutcome(GetJobLogResult(outcome.result()));
	else
		return GetJobLogOutcome(outcome.error());
}

void Openanalytics_openClient::getJobLogAsync(const GetJobLogRequest& request, const GetJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetJobLogOutcomeCallable Openanalytics_openClient::getJobLogCallable(const GetJobLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobLogOutcome()>>(
			[this, request]()
			{
			return this->getJobLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetJobStatusOutcome Openanalytics_openClient::getJobStatus(const GetJobStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobStatusOutcome(GetJobStatusResult(outcome.result()));
	else
		return GetJobStatusOutcome(outcome.error());
}

void Openanalytics_openClient::getJobStatusAsync(const GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetJobStatusOutcomeCallable Openanalytics_openClient::getJobStatusCallable(const GetJobStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobStatusOutcome()>>(
			[this, request]()
			{
			return this->getJobStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetPartitionOutcome Openanalytics_openClient::getPartition(const GetPartitionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPartitionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPartitionOutcome(GetPartitionResult(outcome.result()));
	else
		return GetPartitionOutcome(outcome.error());
}

void Openanalytics_openClient::getPartitionAsync(const GetPartitionRequest& request, const GetPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPartition(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetPartitionOutcomeCallable Openanalytics_openClient::getPartitionCallable(const GetPartitionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPartitionOutcome()>>(
			[this, request]()
			{
			return this->getPartition(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetPartitionsOutcome Openanalytics_openClient::getPartitions(const GetPartitionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetPartitionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetPartitionsOutcome(GetPartitionsResult(outcome.result()));
	else
		return GetPartitionsOutcome(outcome.error());
}

void Openanalytics_openClient::getPartitionsAsync(const GetPartitionsRequest& request, const GetPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getPartitions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetPartitionsOutcomeCallable Openanalytics_openClient::getPartitionsCallable(const GetPartitionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetPartitionsOutcome()>>(
			[this, request]()
			{
			return this->getPartitions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetRegionStatusOutcome Openanalytics_openClient::getRegionStatus(const GetRegionStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetRegionStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetRegionStatusOutcome(GetRegionStatusResult(outcome.result()));
	else
		return GetRegionStatusOutcome(outcome.error());
}

void Openanalytics_openClient::getRegionStatusAsync(const GetRegionStatusRequest& request, const GetRegionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getRegionStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetRegionStatusOutcomeCallable Openanalytics_openClient::getRegionStatusCallable(const GetRegionStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetRegionStatusOutcome()>>(
			[this, request]()
			{
			return this->getRegionStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetServiceLinkedRoleStatusOutcome Openanalytics_openClient::getServiceLinkedRoleStatus(const GetServiceLinkedRoleStatusRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetServiceLinkedRoleStatusOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetServiceLinkedRoleStatusOutcome(GetServiceLinkedRoleStatusResult(outcome.result()));
	else
		return GetServiceLinkedRoleStatusOutcome(outcome.error());
}

void Openanalytics_openClient::getServiceLinkedRoleStatusAsync(const GetServiceLinkedRoleStatusRequest& request, const GetServiceLinkedRoleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getServiceLinkedRoleStatus(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetServiceLinkedRoleStatusOutcomeCallable Openanalytics_openClient::getServiceLinkedRoleStatusCallable(const GetServiceLinkedRoleStatusRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetServiceLinkedRoleStatusOutcome()>>(
			[this, request]()
			{
			return this->getServiceLinkedRoleStatus(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GetTableOutcome Openanalytics_openClient::getTable(const GetTableRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetTableOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetTableOutcome(GetTableResult(outcome.result()));
	else
		return GetTableOutcome(outcome.error());
}

void Openanalytics_openClient::getTableAsync(const GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getTable(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GetTableOutcomeCallable Openanalytics_openClient::getTableCallable(const GetTableRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetTableOutcome()>>(
			[this, request]()
			{
			return this->getTable(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::GrantPrivilegesOutcome Openanalytics_openClient::grantPrivileges(const GrantPrivilegesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantPrivilegesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantPrivilegesOutcome(GrantPrivilegesResult(outcome.result()));
	else
		return GrantPrivilegesOutcome(outcome.error());
}

void Openanalytics_openClient::grantPrivilegesAsync(const GrantPrivilegesRequest& request, const GrantPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantPrivileges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::GrantPrivilegesOutcomeCallable Openanalytics_openClient::grantPrivilegesCallable(const GrantPrivilegesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantPrivilegesOutcome()>>(
			[this, request]()
			{
			return this->grantPrivileges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::InitializeDLAServiceOutcome Openanalytics_openClient::initializeDLAService(const InitializeDLAServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeDLAServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeDLAServiceOutcome(InitializeDLAServiceResult(outcome.result()));
	else
		return InitializeDLAServiceOutcome(outcome.error());
}

void Openanalytics_openClient::initializeDLAServiceAsync(const InitializeDLAServiceRequest& request, const InitializeDLAServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeDLAService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::InitializeDLAServiceOutcomeCallable Openanalytics_openClient::initializeDLAServiceCallable(const InitializeDLAServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeDLAServiceOutcome()>>(
			[this, request]()
			{
			return this->initializeDLAService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::InitializeRegionOutcome Openanalytics_openClient::initializeRegion(const InitializeRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return InitializeRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return InitializeRegionOutcome(InitializeRegionResult(outcome.result()));
	else
		return InitializeRegionOutcome(outcome.error());
}

void Openanalytics_openClient::initializeRegionAsync(const InitializeRegionRequest& request, const InitializeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, initializeRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::InitializeRegionOutcomeCallable Openanalytics_openClient::initializeRegionCallable(const InitializeRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<InitializeRegionOutcome()>>(
			[this, request]()
			{
			return this->initializeRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::KillSparkJobOutcome Openanalytics_openClient::killSparkJob(const KillSparkJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return KillSparkJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return KillSparkJobOutcome(KillSparkJobResult(outcome.result()));
	else
		return KillSparkJobOutcome(outcome.error());
}

void Openanalytics_openClient::killSparkJobAsync(const KillSparkJobRequest& request, const KillSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, killSparkJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::KillSparkJobOutcomeCallable Openanalytics_openClient::killSparkJobCallable(const KillSparkJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<KillSparkJobOutcome()>>(
			[this, request]()
			{
			return this->killSparkJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ListAlreadyBingingRamUidOutcome Openanalytics_openClient::listAlreadyBingingRamUid(const ListAlreadyBingingRamUidRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListAlreadyBingingRamUidOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListAlreadyBingingRamUidOutcome(ListAlreadyBingingRamUidResult(outcome.result()));
	else
		return ListAlreadyBingingRamUidOutcome(outcome.error());
}

void Openanalytics_openClient::listAlreadyBingingRamUidAsync(const ListAlreadyBingingRamUidRequest& request, const ListAlreadyBingingRamUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listAlreadyBingingRamUid(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ListAlreadyBingingRamUidOutcomeCallable Openanalytics_openClient::listAlreadyBingingRamUidCallable(const ListAlreadyBingingRamUidRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListAlreadyBingingRamUidOutcome()>>(
			[this, request]()
			{
			return this->listAlreadyBingingRamUid(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ListModulesReleaseOutcome Openanalytics_openClient::listModulesRelease(const ListModulesReleaseRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListModulesReleaseOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListModulesReleaseOutcome(ListModulesReleaseResult(outcome.result()));
	else
		return ListModulesReleaseOutcome(outcome.error());
}

void Openanalytics_openClient::listModulesReleaseAsync(const ListModulesReleaseRequest& request, const ListModulesReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listModulesRelease(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ListModulesReleaseOutcomeCallable Openanalytics_openClient::listModulesReleaseCallable(const ListModulesReleaseRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListModulesReleaseOutcome()>>(
			[this, request]()
			{
			return this->listModulesRelease(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ListResourcesSpecOutcome Openanalytics_openClient::listResourcesSpec(const ListResourcesSpecRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListResourcesSpecOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListResourcesSpecOutcome(ListResourcesSpecResult(outcome.result()));
	else
		return ListResourcesSpecOutcome(outcome.error());
}

void Openanalytics_openClient::listResourcesSpecAsync(const ListResourcesSpecRequest& request, const ListResourcesSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listResourcesSpec(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ListResourcesSpecOutcomeCallable Openanalytics_openClient::listResourcesSpecCallable(const ListResourcesSpecRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListResourcesSpecOutcome()>>(
			[this, request]()
			{
			return this->listResourcesSpec(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ListSparkJobOutcome Openanalytics_openClient::listSparkJob(const ListSparkJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListSparkJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListSparkJobOutcome(ListSparkJobResult(outcome.result()));
	else
		return ListSparkJobOutcome(outcome.error());
}

void Openanalytics_openClient::listSparkJobAsync(const ListSparkJobRequest& request, const ListSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listSparkJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ListSparkJobOutcomeCallable Openanalytics_openClient::listSparkJobCallable(const ListSparkJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListSparkJobOutcome()>>(
			[this, request]()
			{
			return this->listSparkJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ListVirtualClustersOutcome Openanalytics_openClient::listVirtualClusters(const ListVirtualClustersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListVirtualClustersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListVirtualClustersOutcome(ListVirtualClustersResult(outcome.result()));
	else
		return ListVirtualClustersOutcome(outcome.error());
}

void Openanalytics_openClient::listVirtualClustersAsync(const ListVirtualClustersRequest& request, const ListVirtualClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listVirtualClusters(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ListVirtualClustersOutcomeCallable Openanalytics_openClient::listVirtualClustersCallable(const ListVirtualClustersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListVirtualClustersOutcome()>>(
			[this, request]()
			{
			return this->listVirtualClusters(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ModifyVirtualClusterOutcome Openanalytics_openClient::modifyVirtualCluster(const ModifyVirtualClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVirtualClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVirtualClusterOutcome(ModifyVirtualClusterResult(outcome.result()));
	else
		return ModifyVirtualClusterOutcome(outcome.error());
}

void Openanalytics_openClient::modifyVirtualClusterAsync(const ModifyVirtualClusterRequest& request, const ModifyVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVirtualCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ModifyVirtualClusterOutcomeCallable Openanalytics_openClient::modifyVirtualClusterCallable(const ModifyVirtualClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVirtualClusterOutcome()>>(
			[this, request]()
			{
			return this->modifyVirtualCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ModifyVirtualClusterForSparkOutcome Openanalytics_openClient::modifyVirtualClusterForSpark(const ModifyVirtualClusterForSparkRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ModifyVirtualClusterForSparkOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ModifyVirtualClusterForSparkOutcome(ModifyVirtualClusterForSparkResult(outcome.result()));
	else
		return ModifyVirtualClusterForSparkOutcome(outcome.error());
}

void Openanalytics_openClient::modifyVirtualClusterForSparkAsync(const ModifyVirtualClusterForSparkRequest& request, const ModifyVirtualClusterForSparkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, modifyVirtualClusterForSpark(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ModifyVirtualClusterForSparkOutcomeCallable Openanalytics_openClient::modifyVirtualClusterForSparkCallable(const ModifyVirtualClusterForSparkRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ModifyVirtualClusterForSparkOutcome()>>(
			[this, request]()
			{
			return this->modifyVirtualClusterForSpark(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::OpenDataLakeAnalyticsServiceOutcome Openanalytics_openClient::openDataLakeAnalyticsService(const OpenDataLakeAnalyticsServiceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return OpenDataLakeAnalyticsServiceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return OpenDataLakeAnalyticsServiceOutcome(OpenDataLakeAnalyticsServiceResult(outcome.result()));
	else
		return OpenDataLakeAnalyticsServiceOutcome(outcome.error());
}

void Openanalytics_openClient::openDataLakeAnalyticsServiceAsync(const OpenDataLakeAnalyticsServiceRequest& request, const OpenDataLakeAnalyticsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, openDataLakeAnalyticsService(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::OpenDataLakeAnalyticsServiceOutcomeCallable Openanalytics_openClient::openDataLakeAnalyticsServiceCallable(const OpenDataLakeAnalyticsServiceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<OpenDataLakeAnalyticsServiceOutcome()>>(
			[this, request]()
			{
			return this->openDataLakeAnalyticsService(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::QueryAccountListOutcome Openanalytics_openClient::queryAccountList(const QueryAccountListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryAccountListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryAccountListOutcome(QueryAccountListResult(outcome.result()));
	else
		return QueryAccountListOutcome(outcome.error());
}

void Openanalytics_openClient::queryAccountListAsync(const QueryAccountListRequest& request, const QueryAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryAccountList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::QueryAccountListOutcomeCallable Openanalytics_openClient::queryAccountListCallable(const QueryAccountListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryAccountListOutcome()>>(
			[this, request]()
			{
			return this->queryAccountList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::QueryDataSourceDefOutcome Openanalytics_openClient::queryDataSourceDef(const QueryDataSourceDefRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDataSourceDefOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDataSourceDefOutcome(QueryDataSourceDefResult(outcome.result()));
	else
		return QueryDataSourceDefOutcome(outcome.error());
}

void Openanalytics_openClient::queryDataSourceDefAsync(const QueryDataSourceDefRequest& request, const QueryDataSourceDefAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDataSourceDef(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::QueryDataSourceDefOutcomeCallable Openanalytics_openClient::queryDataSourceDefCallable(const QueryDataSourceDefRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDataSourceDefOutcome()>>(
			[this, request]()
			{
			return this->queryDataSourceDef(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::QueryDiscountListOutcome Openanalytics_openClient::queryDiscountList(const QueryDiscountListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryDiscountListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryDiscountListOutcome(QueryDiscountListResult(outcome.result()));
	else
		return QueryDiscountListOutcome(outcome.error());
}

void Openanalytics_openClient::queryDiscountListAsync(const QueryDiscountListRequest& request, const QueryDiscountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryDiscountList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::QueryDiscountListOutcomeCallable Openanalytics_openClient::queryDiscountListCallable(const QueryDiscountListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryDiscountListOutcome()>>(
			[this, request]()
			{
			return this->queryDiscountList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::QueryEndPointListOutcome Openanalytics_openClient::queryEndPointList(const QueryEndPointListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryEndPointListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryEndPointListOutcome(QueryEndPointListResult(outcome.result()));
	else
		return QueryEndPointListOutcome(outcome.error());
}

void Openanalytics_openClient::queryEndPointListAsync(const QueryEndPointListRequest& request, const QueryEndPointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryEndPointList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::QueryEndPointListOutcomeCallable Openanalytics_openClient::queryEndPointListCallable(const QueryEndPointListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryEndPointListOutcome()>>(
			[this, request]()
			{
			return this->queryEndPointList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::QueryServiceAccountListOutcome Openanalytics_openClient::queryServiceAccountList(const QueryServiceAccountListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryServiceAccountListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryServiceAccountListOutcome(QueryServiceAccountListResult(outcome.result()));
	else
		return QueryServiceAccountListOutcome(outcome.error());
}

void Openanalytics_openClient::queryServiceAccountListAsync(const QueryServiceAccountListRequest& request, const QueryServiceAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryServiceAccountList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::QueryServiceAccountListOutcomeCallable Openanalytics_openClient::queryServiceAccountListCallable(const QueryServiceAccountListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryServiceAccountListOutcome()>>(
			[this, request]()
			{
			return this->queryServiceAccountList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::QueryTaskSumOutcome Openanalytics_openClient::queryTaskSum(const QueryTaskSumRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return QueryTaskSumOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return QueryTaskSumOutcome(QueryTaskSumResult(outcome.result()));
	else
		return QueryTaskSumOutcome(outcome.error());
}

void Openanalytics_openClient::queryTaskSumAsync(const QueryTaskSumRequest& request, const QueryTaskSumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, queryTaskSum(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::QueryTaskSumOutcomeCallable Openanalytics_openClient::queryTaskSumCallable(const QueryTaskSumRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<QueryTaskSumOutcome()>>(
			[this, request]()
			{
			return this->queryTaskSum(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ReleaseInstanceOutcome Openanalytics_openClient::releaseInstance(const ReleaseInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseInstanceOutcome(ReleaseInstanceResult(outcome.result()));
	else
		return ReleaseInstanceOutcome(outcome.error());
}

void Openanalytics_openClient::releaseInstanceAsync(const ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ReleaseInstanceOutcomeCallable Openanalytics_openClient::releaseInstanceCallable(const ReleaseInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::RemoveEndPointOutcome Openanalytics_openClient::removeEndPoint(const RemoveEndPointRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RemoveEndPointOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RemoveEndPointOutcome(RemoveEndPointResult(outcome.result()));
	else
		return RemoveEndPointOutcome(outcome.error());
}

void Openanalytics_openClient::removeEndPointAsync(const RemoveEndPointRequest& request, const RemoveEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, removeEndPoint(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::RemoveEndPointOutcomeCallable Openanalytics_openClient::removeEndPointCallable(const RemoveEndPointRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RemoveEndPointOutcome()>>(
			[this, request]()
			{
			return this->removeEndPoint(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::ResetMainPasswordOutcome Openanalytics_openClient::resetMainPassword(const ResetMainPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ResetMainPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ResetMainPasswordOutcome(ResetMainPasswordResult(outcome.result()));
	else
		return ResetMainPasswordOutcome(outcome.error());
}

void Openanalytics_openClient::resetMainPasswordAsync(const ResetMainPasswordRequest& request, const ResetMainPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, resetMainPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::ResetMainPasswordOutcomeCallable Openanalytics_openClient::resetMainPasswordCallable(const ResetMainPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ResetMainPasswordOutcome()>>(
			[this, request]()
			{
			return this->resetMainPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::RevokePrivilegesOutcome Openanalytics_openClient::revokePrivileges(const RevokePrivilegesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokePrivilegesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokePrivilegesOutcome(RevokePrivilegesResult(outcome.result()));
	else
		return RevokePrivilegesOutcome(outcome.error());
}

void Openanalytics_openClient::revokePrivilegesAsync(const RevokePrivilegesRequest& request, const RevokePrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokePrivileges(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::RevokePrivilegesOutcomeCallable Openanalytics_openClient::revokePrivilegesCallable(const RevokePrivilegesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokePrivilegesOutcome()>>(
			[this, request]()
			{
			return this->revokePrivileges(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::SetAllowIPOutcome Openanalytics_openClient::setAllowIP(const SetAllowIPRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetAllowIPOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetAllowIPOutcome(SetAllowIPResult(outcome.result()));
	else
		return SetAllowIPOutcome(outcome.error());
}

void Openanalytics_openClient::setAllowIPAsync(const SetAllowIPRequest& request, const SetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setAllowIP(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::SetAllowIPOutcomeCallable Openanalytics_openClient::setAllowIPCallable(const SetAllowIPRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetAllowIPOutcome()>>(
			[this, request]()
			{
			return this->setAllowIP(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::SetCapacityLimitPolicyOutcome Openanalytics_openClient::setCapacityLimitPolicy(const SetCapacityLimitPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetCapacityLimitPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetCapacityLimitPolicyOutcome(SetCapacityLimitPolicyResult(outcome.result()));
	else
		return SetCapacityLimitPolicyOutcome(outcome.error());
}

void Openanalytics_openClient::setCapacityLimitPolicyAsync(const SetCapacityLimitPolicyRequest& request, const SetCapacityLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setCapacityLimitPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::SetCapacityLimitPolicyOutcomeCallable Openanalytics_openClient::setCapacityLimitPolicyCallable(const SetCapacityLimitPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetCapacityLimitPolicyOutcome()>>(
			[this, request]()
			{
			return this->setCapacityLimitPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::SetRelationWithBizOutcome Openanalytics_openClient::setRelationWithBiz(const SetRelationWithBizRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetRelationWithBizOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetRelationWithBizOutcome(SetRelationWithBizResult(outcome.result()));
	else
		return SetRelationWithBizOutcome(outcome.error());
}

void Openanalytics_openClient::setRelationWithBizAsync(const SetRelationWithBizRequest& request, const SetRelationWithBizAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setRelationWithBiz(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::SetRelationWithBizOutcomeCallable Openanalytics_openClient::setRelationWithBizCallable(const SetRelationWithBizRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetRelationWithBizOutcome()>>(
			[this, request]()
			{
			return this->setRelationWithBiz(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::SetTrafficLimitPolicyOutcome Openanalytics_openClient::setTrafficLimitPolicy(const SetTrafficLimitPolicyRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SetTrafficLimitPolicyOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SetTrafficLimitPolicyOutcome(SetTrafficLimitPolicyResult(outcome.result()));
	else
		return SetTrafficLimitPolicyOutcome(outcome.error());
}

void Openanalytics_openClient::setTrafficLimitPolicyAsync(const SetTrafficLimitPolicyRequest& request, const SetTrafficLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, setTrafficLimitPolicy(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::SetTrafficLimitPolicyOutcomeCallable Openanalytics_openClient::setTrafficLimitPolicyCallable(const SetTrafficLimitPolicyRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SetTrafficLimitPolicyOutcome()>>(
			[this, request]()
			{
			return this->setTrafficLimitPolicy(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::StartVirtualClusterOutcome Openanalytics_openClient::startVirtualCluster(const StartVirtualClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StartVirtualClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StartVirtualClusterOutcome(StartVirtualClusterResult(outcome.result()));
	else
		return StartVirtualClusterOutcome(outcome.error());
}

void Openanalytics_openClient::startVirtualClusterAsync(const StartVirtualClusterRequest& request, const StartVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, startVirtualCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::StartVirtualClusterOutcomeCallable Openanalytics_openClient::startVirtualClusterCallable(const StartVirtualClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StartVirtualClusterOutcome()>>(
			[this, request]()
			{
			return this->startVirtualCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::StopVirtualClusterOutcome Openanalytics_openClient::stopVirtualCluster(const StopVirtualClusterRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopVirtualClusterOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopVirtualClusterOutcome(StopVirtualClusterResult(outcome.result()));
	else
		return StopVirtualClusterOutcome(outcome.error());
}

void Openanalytics_openClient::stopVirtualClusterAsync(const StopVirtualClusterRequest& request, const StopVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopVirtualCluster(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::StopVirtualClusterOutcomeCallable Openanalytics_openClient::stopVirtualClusterCallable(const StopVirtualClusterRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopVirtualClusterOutcome()>>(
			[this, request]()
			{
			return this->stopVirtualCluster(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::SubmitSparkJobOutcome Openanalytics_openClient::submitSparkJob(const SubmitSparkJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return SubmitSparkJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return SubmitSparkJobOutcome(SubmitSparkJobResult(outcome.result()));
	else
		return SubmitSparkJobOutcome(outcome.error());
}

void Openanalytics_openClient::submitSparkJobAsync(const SubmitSparkJobRequest& request, const SubmitSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, submitSparkJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::SubmitSparkJobOutcomeCallable Openanalytics_openClient::submitSparkJobCallable(const SubmitSparkJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<SubmitSparkJobOutcome()>>(
			[this, request]()
			{
			return this->submitSparkJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::UnSubscribeRegionOutcome Openanalytics_openClient::unSubscribeRegion(const UnSubscribeRegionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnSubscribeRegionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnSubscribeRegionOutcome(UnSubscribeRegionResult(outcome.result()));
	else
		return UnSubscribeRegionOutcome(outcome.error());
}

void Openanalytics_openClient::unSubscribeRegionAsync(const UnSubscribeRegionRequest& request, const UnSubscribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unSubscribeRegion(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::UnSubscribeRegionOutcomeCallable Openanalytics_openClient::unSubscribeRegionCallable(const UnSubscribeRegionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnSubscribeRegionOutcome()>>(
			[this, request]()
			{
			return this->unSubscribeRegion(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Openanalytics_openClient::UpdateAccountPasswordOutcome Openanalytics_openClient::updateAccountPassword(const UpdateAccountPasswordRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateAccountPasswordOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateAccountPasswordOutcome(UpdateAccountPasswordResult(outcome.result()));
	else
		return UpdateAccountPasswordOutcome(outcome.error());
}

void Openanalytics_openClient::updateAccountPasswordAsync(const UpdateAccountPasswordRequest& request, const UpdateAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateAccountPassword(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Openanalytics_openClient::UpdateAccountPasswordOutcomeCallable Openanalytics_openClient::updateAccountPasswordCallable(const UpdateAccountPasswordRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateAccountPasswordOutcome()>>(
			[this, request]()
			{
			return this->updateAccountPassword(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

