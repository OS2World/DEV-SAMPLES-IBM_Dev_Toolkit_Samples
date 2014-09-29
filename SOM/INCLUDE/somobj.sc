
/*
 * This file was generated by the SOM Compiler.
 * FileName: somobj.sc.
 * Generated using:
 *     SOM Precompiler somipc: 2.29.1.17
 *     SOM Emitter emitsc: 2.47
 */
class: SOMObject, 
    externalstem = somob, majorversion = 1, 
    minorversion = 5, filestem = somobj;

    --  This is the SOM root class, all SOM classes must be descended from
    --  <SOMObject>. <SOMObject> has no instance data so there is no
    --  per-instance cost to to being descended from it.


release order:
    somInit, somUninit, 
    somFree, somDefaultVCopyInit, 
    somGetClassName, somGetClass, 
    somIsA, somRespondsTo, 
    somIsInstanceOf, somGetSize, 
    somDumpSelf, somDumpSelfInt, 
    somPrintSelf, somDefaultConstVCopyInit, 
    somDispatchV, somDispatchL, 
    somDispatchA, somDispatchD, 
    somDispatch, somClassDispatch, 
    somCastObj, somResetObj, 
    somDefaultInit, somDestruct, 
    somPrivate1, somPrivate2, 
    somDefaultCopyInit, somDefaultConstCopyInit, 
    somDefaultAssign, somDefaultConstAssign, 
    somDefaultVAssign, somDefaultConstVAssign;

methods:


    void   somDefaultInit(som3InitCtrl* ctrl), descriptor = ::SOMObject::somDefaultInit, init, 
    caller_owns_parameters = ctrl;

    --  A default initializer for a SOM object. Passing a null ctrl
    --  indicates to the receiver that its class is the class of the
    --  object being initialized, whereby the initializer will determine
    --  an appropriate control structure.

    void   somDestruct(octet doFree,
		som3DestructCtrl* ctrl), descriptor = ::SOMObject::somDestruct, caller_owns_parameters = ctrl;

    --  The default destructor for a SOM object. A nonzero <doFree>
    --  indicates that the object storage should be freed by the
    --  object's class (via somDeallocate) after uninitialization.
    --  As with somDefaultInit, a null ctrl can be passed.

    void   somDefaultCopyInit(som3InitCtrl* ctrl,
		SOMObject* fromObj), descriptor = ::SOMObject::somDefaultCopyInit, init, 
    caller_owns_parameters = ctrl;

    --  A default copy constructor. Use this to make copies of objects for
    --  calling methods with "by-value" argument semantics.

    SOMObject*   somDefaultAssign(som3AssignCtrl* ctrl,
		SOMObject* fromObj), descriptor = ::SOMObject::somDefaultAssign, caller_owns_parameters = ctrl;

    --  A default assignment operator. Use this to "assign" the state of one
    --  object to another.

    void   somDefaultConstCopyInit(som3InitCtrl* ctrl,
		SOMObject* fromObj), descriptor = ::SOMObject::somDefaultConstCopyInit, init, 
    caller_owns_parameters = ctrl;

    --  A default copy constructor that uses a const fromObj.

    void   somDefaultVCopyInit(som3InitCtrl* ctrl,
		SOMObject* fromObj), descriptor = ::SOMObject::somDefaultVCopyInit, init, 
    caller_owns_parameters = ctrl;

    --  A default copy constructor that uses a volatile fromObj.

    void   somDefaultConstVCopyInit(som3InitCtrl* ctrl,
		SOMObject* fromObj), descriptor = ::SOMObject::somDefaultConstVCopyInit, init, 
    caller_owns_parameters = ctrl;

    --  A default copy constructor that uses a const volatile fromObj.

    SOMObject*   somDefaultConstAssign(som3AssignCtrl* ctrl,
		SOMObject* fromObj), descriptor = ::SOMObject::somDefaultConstAssign, caller_owns_parameters = ctrl;

    --  A default assignment operator that uses a const fromObj.

    SOMObject*   somDefaultVAssign(som3AssignCtrl* ctrl,
		SOMObject* fromObj), descriptor = ::SOMObject::somDefaultVAssign, caller_owns_parameters = ctrl;

    --  A default assignment operator that uses a volatile fromObj.

    SOMObject*   somDefaultConstVAssign(som3AssignCtrl* ctrl,
		SOMObject* fromObj), descriptor = ::SOMObject::somDefaultConstVAssign, caller_owns_parameters = ctrl;

    --  A default assignment operator that uses a const volatile fromObj.

    void   somInit(), descriptor = ::SOMObject::somInit;

    --  Obsolete but still supported. Override somDefaultInit instead of somInit.

    void   somFree(), descriptor = ::SOMObject::somFree;

    --  Use as directed by framework implementations.

    void   somUninit(), descriptor = ::SOMObject::somUninit;

    --  Obsolete but still supported. Override somDestruct instead of somUninit.

    SOMClass*   somGetClass(), descriptor = ::SOMObject::somGetClass;

    --  Return the receiver's class.

    string   somGetClassName(), descriptor = ::SOMObject::somGetClassName;

    --  Return the name of the receiver's class.

    long   somGetSize(), descriptor = ::SOMObject::somGetSize;

    --  Return the size of the receiver.

    boolean   somIsA(SOMClass* aClassObj), descriptor = ::SOMObject::somIsA;

    --  Returns 1 (true) if the receiver responds to methods
    --  introduced by <aClassObj>, and 0 (false) otherwise.

    boolean   somIsInstanceOf(SOMClass* aClassObj), descriptor = ::SOMObject::somIsInstanceOf;

    --  Returns 1 (true) if the receiver is an instance of
    --  <aClassObj> and 0 (false) otherwise.

    boolean   somRespondsTo(somId mId), descriptor = ::SOMObject::somRespondsTo, caller_owns_parameters = mId;

    --  Returns 1 (true) if the indicated method can be invoked
    --  on the receiver and 0 (false) otherwise.

    boolean   somDispatch(somToken* retValue,
		somId methodId,
		...), descriptor = ::SOMObject::somDispatch, caller_owns_parameters = methodId, ap;

    --  This method provides a generic, class-specific dispatch mechanism.
    --  It accepts as input <retValue> a pointer to the memory area to be
    --  loaded with the result of dispatching the method indicated by
    --  <methodId> using the arguments in <ap>. <ap> contains the object
    --  on which the method is to be invoked as the first argument.

    boolean   somClassDispatch(SOMClass* clsObj,
		somToken* retValue,
		somId methodId,
		...), descriptor = ::SOMObject::somClassDispatch, caller_owns_parameters = methodId, ap;

    --  Like somDispatch, but method resolution for static methods is done
    --  according to the clsObj instance method table.

    boolean   somCastObj(SOMClass* cls), descriptor = ::SOMObject::somCastObj;

    --  cast the receiving object to cls (which must be an ancestor of the
    --  objects true class. Returns true on success.

    boolean   somResetObj(), descriptor = ::SOMObject::somResetObj;

    --  reset an object to its true class. Returns true always.

    void   somDispatchV(somId methodId,
		somId descriptor,
		...), descriptor = ::SOMObject::somDispatchV, caller_owns_parameters = methodId, descriptor, ap;

    --  Obsolete. Use somDispatch instead.

    long   somDispatchL(somId methodId,
		somId descriptor,
		...), descriptor = ::SOMObject::somDispatchL, caller_owns_parameters = methodId, descriptor, ap;

    --  Obsolete. Use somDispatch instead.

    void*   somDispatchA(somId methodId,
		somId descriptor,
		...), descriptor = ::SOMObject::somDispatchA, caller_owns_parameters = methodId, descriptor, ap;

    --  Obsolete. Use somDispatch instead.

    double   somDispatchD(somId methodId,
		somId descriptor,
		...), descriptor = ::SOMObject::somDispatchD, caller_owns_parameters = methodId, descriptor, ap;

    --  Obsolete. Use somDispatch instead.

    SOMObject*   somPrintSelf(), descriptor = ::SOMObject::somPrintSelf;

    --  Uses <SOMOutCharRoutine> to write a brief string with identifying
    --  information about this object.  The default implementation just gives
    --  the object's class name and its address in memory.
    --  <self> is returned.

    void   somDumpSelf(long level), descriptor = ::SOMObject::somDumpSelf;

    --  Uses <SOMOutCharRoutine> to write a detailed description of this object
    --  and its current state.
    -- 
    --  <level> indicates the nesting level for describing compound objects
    --  it must be greater than or equal to zero.  All lines in the
    --  description will be preceeded by <2*level> spaces.
    -- 
    --  This routine only actually writes the data that concerns the object
    --  as a whole, such as class, and uses <somDumpSelfInt> to describe
    --  the object's current state.  This approach allows readable
    --  descriptions of compound objects to be constructed.
    -- 
    --  Generally it is not necessary to override this method, if it is
    --  overriden it generally must be completely replaced.

    void   somDumpSelfInt(long level), descriptor = ::SOMObject::somDumpSelfInt;

    --  Uses <SOMOutCharRoutine> to write in the current state of this object.
    --  Generally this method will need to be overridden.  When overriding
    --  it, begin by calling the parent class form of this method and then
    --  write in a description of your class's instance data. This will
    --  result in a description of all the object's instance data going
    --  from its root ancestor class to its specific class.

#include <somcls.sc> 