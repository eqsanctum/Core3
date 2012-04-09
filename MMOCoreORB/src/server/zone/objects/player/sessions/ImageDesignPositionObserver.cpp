/*
 *	server/zone/objects/player/sessions/ImageDesignPositionObserver.cpp generated by engine3 IDL compiler 0.60
 */

#include "ImageDesignPositionObserver.h"

#include "server/zone/objects/player/sessions/ImageDesignSession.h"

/*
 *	ImageDesignPositionObserverStub
 */

enum {RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_ = 6};

ImageDesignPositionObserver::ImageDesignPositionObserver(ImageDesignSession* designSession) : Observer(DummyConstructorParameter::instance()) {
	ImageDesignPositionObserverImplementation* _implementation = new ImageDesignPositionObserverImplementation(designSession);
	_impl = _implementation;
	_impl->_setStub(this);
	_setClassName("ImageDesignPositionObserver");
}

ImageDesignPositionObserver::ImageDesignPositionObserver(DummyConstructorParameter* param) : Observer(param) {
	_setClassName("ImageDesignPositionObserver");
}

ImageDesignPositionObserver::~ImageDesignPositionObserver() {
}



int ImageDesignPositionObserver::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	ImageDesignPositionObserverImplementation* _implementation = static_cast<ImageDesignPositionObserverImplementation*>(_getImplementation());
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_);
		method.addUnsignedIntParameter(eventType);
		method.addObjectParameter(observable);
		method.addObjectParameter(arg1);
		method.addSignedLongParameter(arg2);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->notifyObserverEvent(eventType, observable, arg1, arg2);
}

DistributedObjectServant* ImageDesignPositionObserver::_getImplementation() {

	_updated = true;
	return _impl;
}

void ImageDesignPositionObserver::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ImageDesignPositionObserverImplementation
 */

ImageDesignPositionObserverImplementation::ImageDesignPositionObserverImplementation(DummyConstructorParameter* param) : ObserverImplementation(param) {
	_initializeImplementation();
}


ImageDesignPositionObserverImplementation::~ImageDesignPositionObserverImplementation() {
}


void ImageDesignPositionObserverImplementation::finalize() {
}

void ImageDesignPositionObserverImplementation::_initializeImplementation() {
	_setClassHelper(ImageDesignPositionObserverHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void ImageDesignPositionObserverImplementation::_setStub(DistributedObjectStub* stub) {
	_this = static_cast<ImageDesignPositionObserver*>(stub);
	ObserverImplementation::_setStub(stub);
}

DistributedObjectStub* ImageDesignPositionObserverImplementation::_getStub() {
	return _this;
}

ImageDesignPositionObserverImplementation::operator const ImageDesignPositionObserver*() {
	return _this;
}

void ImageDesignPositionObserverImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ImageDesignPositionObserverImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ImageDesignPositionObserverImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ImageDesignPositionObserverImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ImageDesignPositionObserverImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ImageDesignPositionObserverImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ImageDesignPositionObserverImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ImageDesignPositionObserverImplementation::_serializationHelperMethod() {
	ObserverImplementation::_serializationHelperMethod();

	_setClassName("ImageDesignPositionObserver");

}

void ImageDesignPositionObserverImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint32 _varSize = stream->readInt();

		int _currentOffset = stream->getOffset();

		if(ImageDesignPositionObserverImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ImageDesignPositionObserverImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ObserverImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "ImageDesignPositionObserver.session") {
		TypeInfo<ManagedWeakReference<ImageDesignSession* > >::parseFromBinaryStream(&session, stream);
		return true;
	}


	return false;
}

void ImageDesignPositionObserverImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ImageDesignPositionObserverImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ImageDesignPositionObserverImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	int _count = ObserverImplementation::writeObjectMembers(stream);

	String _name;
	int _offset;
	uint32 _totalSize;
	_name = "ImageDesignPositionObserver.session";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeInt(0);
	TypeInfo<ManagedWeakReference<ImageDesignSession* > >::toBinaryStream(&session, stream);
	_totalSize = (uint32) (stream->getOffset() - (_offset + 4));
	stream->writeInt(_offset, _totalSize);


	return _count + 1;
}

ImageDesignPositionObserverImplementation::ImageDesignPositionObserverImplementation(ImageDesignSession* designSession) {
	_initializeImplementation();
	// server/zone/objects/player/sessions/ImageDesignPositionObserver.idl():  		session = designSession;
	session = designSession;
	// server/zone/objects/player/sessions/ImageDesignPositionObserver.idl():  		setObserverType(ObserverType.IMAGEDESIGNPOSITION);
	setObserverType(ObserverType::IMAGEDESIGNPOSITION);
}

/*
 *	ImageDesignPositionObserverAdapter
 */


#include "engine/orb/messages/InvokeMethodMessage.h"


ImageDesignPositionObserverAdapter::ImageDesignPositionObserverAdapter(ImageDesignPositionObserver* obj) : ObserverAdapter(obj) {
}

void ImageDesignPositionObserverAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	DOBMessage* resp = inv->getInvocationMessage();

	switch (methid) {
	case RPC_NOTIFYOBSERVEREVENT__INT_OBSERVABLE_MANAGEDOBJECT_LONG_:
		resp->insertSignedInt(notifyObserverEvent(inv->getUnsignedIntParameter(), static_cast<Observable*>(inv->getObjectParameter()), static_cast<ManagedObject*>(inv->getObjectParameter()), inv->getSignedLongParameter()));
		break;
	default:
		throw Exception("Method does not exists");
	}
}

int ImageDesignPositionObserverAdapter::notifyObserverEvent(unsigned int eventType, Observable* observable, ManagedObject* arg1, long long arg2) {
	return (static_cast<ImageDesignPositionObserver*>(stub))->notifyObserverEvent(eventType, observable, arg1, arg2);
}

/*
 *	ImageDesignPositionObserverHelper
 */

ImageDesignPositionObserverHelper* ImageDesignPositionObserverHelper::staticInitializer = ImageDesignPositionObserverHelper::instance();

ImageDesignPositionObserverHelper::ImageDesignPositionObserverHelper() {
	className = "ImageDesignPositionObserver";

	Core::getObjectBroker()->registerClass(className, this);
}

void ImageDesignPositionObserverHelper::finalizeHelper() {
	ImageDesignPositionObserverHelper::finalize();
}

DistributedObject* ImageDesignPositionObserverHelper::instantiateObject() {
	return new ImageDesignPositionObserver(DummyConstructorParameter::instance());
}

DistributedObjectServant* ImageDesignPositionObserverHelper::instantiateServant() {
	return new ImageDesignPositionObserverImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ImageDesignPositionObserverHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ImageDesignPositionObserverAdapter(static_cast<ImageDesignPositionObserver*>(obj));

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

