

HEADER("Pointer size"),
SIZE(SizeofPointer, PVOID),

HEADER("Breakpoints"),
CONSTANT(BREAKPOINT_BREAK),
CONSTANT(BREAKPOINT_PRINT),
CONSTANT(BREAKPOINT_PROMPT),
CONSTANT(BREAKPOINT_LOAD_SYMBOLS),
CONSTANT(BREAKPOINT_UNLOAD_SYMBOLS),
CONSTANT(BREAKPOINT_COMMAND_STRING),

HEADER("Context Frame Flags"),
CONSTANT(CONTEXT_FULL),
CONSTANT(CONTEXT_CONTROL),
CONSTANT(CONTEXT_INTEGER),
#ifndef _M_ARM
CONSTANT(CONTEXT_SEGMENTS),
CONSTANT(CONTEXT_FLOATING_POINT),
CONSTANT(CONTEXT_DEBUG_REGISTERS),
#endif

HEADER("Exception flags"),
CONSTANT(EXCEPTION_NONCONTINUABLE),
CONSTANT(EXCEPTION_UNWINDING),
CONSTANT(EXCEPTION_EXIT_UNWIND),
CONSTANT(EXCEPTION_STACK_INVALID),
CONSTANT(EXCEPTION_NESTED_CALL),
CONSTANT(EXCEPTION_TARGET_UNWIND),
CONSTANT(EXCEPTION_COLLIDED_UNWIND),
CONSTANT(EXCEPTION_UNWIND),
CONSTANT(EXCEPTION_EXECUTE_HANDLER),
CONSTANT(EXCEPTION_CONTINUE_SEARCH),
CONSTANT(EXCEPTION_CONTINUE_EXECUTION),
#ifdef _X86_
CONSTANT(EXCEPTION_CHAIN_END),
//CONSTANT(FIXED_NTVDMSTATE_LINEAR),
#endif

HEADER("Exception types"),
CONSTANT(ExceptionContinueExecution),
CONSTANT(ExceptionContinueSearch),
CONSTANT(ExceptionNestedException),
CONSTANT(ExceptionCollidedUnwind),

HEADER("Lock Queue"),
CONSTANT(LOCK_QUEUE_WAIT),
CONSTANT(LOCK_QUEUE_OWNER),
CONSTANT(LockQueueDispatcherLock),

//HEADER("Performance Definitions"),
//CONSTANT(PERF_CONTEXTSWAP_OFFSET),
//CONSTANT(PERF_CONTEXTSWAP_FLAG),
//CONSTANT(PERF_INTERRUPT_OFFSET),
//CONSTANT(PERF_INTERRUPT_FLAG),
//CONSTANT(PERF_PROFILE_OFFSET),
//CONSTANT(PERF_PROFILE_FLAG),
//CONSTANT(PERF_SYSCALL_OFFSET),
//CONSTANT(PERF_SYSCALL_FLAG),
//CONSTANT(PERF_SPINLOCK_OFFSET),
//CONSTANT(PERF_SPINLOCK_FLAG),
//CONSTANT(NTOS_YIELD_MACRO),

HEADER("Process states"),
CONSTANT(ProcessInMemory),
CONSTANT(ProcessOutOfMemory),
CONSTANT(ProcessInTransition),

HEADER("Processor mode"),
CONSTANT(KernelMode),
CONSTANT(UserMode),

HEADER("Status codes"),
CONSTANT(STATUS_ACCESS_VIOLATION),
CONSTANT(STATUS_ASSERTION_FAILURE),
CONSTANT(STATUS_ARRAY_BOUNDS_EXCEEDED),
CONSTANT(STATUS_BAD_COMPRESSION_BUFFER),
CONSTANT(STATUS_BREAKPOINT),
CONSTANT(STATUS_CALLBACK_POP_STACK),
CONSTANT(STATUS_DATATYPE_MISALIGNMENT),
CONSTANT(STATUS_FLOAT_DENORMAL_OPERAND),
CONSTANT(STATUS_FLOAT_DIVIDE_BY_ZERO),
CONSTANT(STATUS_FLOAT_INEXACT_RESULT),
CONSTANT(STATUS_FLOAT_INVALID_OPERATION),
CONSTANT(STATUS_FLOAT_OVERFLOW),
CONSTANT(STATUS_FLOAT_STACK_CHECK),
CONSTANT(STATUS_FLOAT_UNDERFLOW),
CONSTANT(STATUS_FLOAT_MULTIPLE_FAULTS),
CONSTANT(STATUS_FLOAT_MULTIPLE_TRAPS),
CONSTANT(STATUS_GUARD_PAGE_VIOLATION),
CONSTANT(STATUS_ILLEGAL_FLOAT_CONTEXT),
CONSTANT(STATUS_ILLEGAL_INSTRUCTION),
CONSTANT(STATUS_INSTRUCTION_MISALIGNMENT),
CONSTANT(STATUS_INVALID_HANDLE),
CONSTANT(STATUS_INVALID_LOCK_SEQUENCE),
CONSTANT(STATUS_INVALID_OWNER),
CONSTANT(STATUS_INVALID_PARAMETER),
CONSTANT(STATUS_INVALID_PARAMETER_1),
CONSTANT(STATUS_INVALID_SYSTEM_SERVICE),
//CONSTANT(STATUS_INVALID_THREAD),
CONSTANT(STATUS_INTEGER_DIVIDE_BY_ZERO),
CONSTANT(STATUS_INTEGER_OVERFLOW),
CONSTANT(STATUS_IN_PAGE_ERROR),
CONSTANT(STATUS_KERNEL_APC),
CONSTANT(STATUS_LONGJUMP),
CONSTANT(STATUS_NO_CALLBACK_ACTIVE),
CONSTANT(STATUS_NO_EVENT_PAIR),
CONSTANT(STATUS_PRIVILEGED_INSTRUCTION),
CONSTANT(STATUS_SINGLE_STEP),
CONSTANT(STATUS_STACK_BUFFER_OVERRUN),
CONSTANT(STATUS_STACK_OVERFLOW),
CONSTANT(STATUS_SUCCESS),
CONSTANT(STATUS_THREAD_IS_TERMINATING),
CONSTANT(STATUS_TIMEOUT),
CONSTANT(STATUS_UNWIND),
CONSTANT(STATUS_UNWIND_CONSOLIDATE),
CONSTANT(STATUS_USER_APC),
CONSTANT(STATUS_WAKE_SYSTEM_DEBUGGER),

HEADER("TLS defines"),
CONSTANT(TLS_MINIMUM_AVAILABLE),
CONSTANT(TLS_EXPANSION_SLOTS),

HEADER("Thread states"),
CONSTANT(Initialized),
CONSTANT(Ready),
CONSTANT(Running),
CONSTANT(Standby),
CONSTANT(Terminated),
CONSTANT(Waiting),

HEADER("Wait type / reason"),
CONSTANT(WrExecutive),
CONSTANT(WrMutex),
CONSTANT(WrDispatchInt),
CONSTANT(WrQuantumEnd),
CONSTANT(WrEventPair),
CONSTANT(WaitAny),
CONSTANT(WaitAll),

HEADER("Interrupt object types"),
CONSTANTX(InLevelSensitive, LevelSensitive),
CONSTANTX(InLatched, Latched),

HEADER("Bug Check Codes"),
CONSTANT(APC_INDEX_MISMATCH),
CONSTANT(INVALID_AFFINITY_SET),
CONSTANT(INVALID_DATA_ACCESS_TRAP),
CONSTANT(IRQL_NOT_GREATER_OR_EQUAL),
CONSTANT(IRQL_NOT_LESS_OR_EQUAL),
CONSTANT(NO_USER_MODE_CONTEXT),
CONSTANT(SPIN_LOCK_ALREADY_OWNED),
CONSTANT(SPIN_LOCK_NOT_OWNED),
CONSTANT(THREAD_NOT_MUTEX_OWNER),
CONSTANT(TRAP_CAUSE_UNKNOWN),
CONSTANT(KMODE_EXCEPTION_NOT_HANDLED),
CONSTANT(KERNEL_APC_PENDING_DURING_EXIT),
CONSTANT(PANIC_STACK_SWITCH),
CONSTANT(DATA_BUS_ERROR),
CONSTANT(INSTRUCTION_BUS_ERROR),
CONSTANT(SYSTEM_EXIT_OWNED_MUTEX),
//CONSTANT(SYSTEM_UNWIND_PREVIOUS_USER),
//CONSTANT(SYSTEM_SERVICE_EXCEPTION),
//CONSTANT(INTERRUPT_UNWIND_ATTEMPTED),
//CONSTANT(INTERRUPT_EXCEPTION_NOT_HANDLED),
CONSTANT(PAGE_FAULT_WITH_INTERRUPTS_OFF),
CONSTANT(IRQL_GT_ZERO_AT_SYSTEM_SERVICE),
CONSTANT(DATA_COHERENCY_EXCEPTION),
CONSTANT(INSTRUCTION_COHERENCY_EXCEPTION),
CONSTANT(HAL1_INITIALIZATION_FAILED),
CONSTANT(UNEXPECTED_KERNEL_MODE_TRAP),
CONSTANT(NMI_HARDWARE_FAILURE),
CONSTANT(SPIN_LOCK_INIT_FAILURE),
CONSTANT(ATTEMPTED_SWITCH_FROM_DPC),
//CONSTANT(MUTEX_ALREADY_OWNED),
//CONSTANT(HARDWARE_INTERRUPT_STORM),
//CONSTANT(RECURSIVE_MACHINE_CHECK),
//CONSTANT(RECURSIVE_NMI),

HEADER("IRQL"),
CONSTANT(PASSIVE_LEVEL),
CONSTANT(APC_LEVEL),
CONSTANT(DISPATCH_LEVEL),
#ifdef _M_AMD64
CONSTANT(CLOCK_LEVEL),
#else
CONSTANT(CLOCK1_LEVEL),
CONSTANT(CLOCK2_LEVEL),
#endif
CONSTANT(IPI_LEVEL),
CONSTANT(POWER_LEVEL),
CONSTANT(PROFILE_LEVEL),
CONSTANT(HIGH_LEVEL),
RAW("#ifdef NT_UP"),
{TYPE_CONSTANT, "SYNCH_LEVEL", DISPATCH_LEVEL},
RAW("#else"),
{TYPE_CONSTANT, "SYNCH_LEVEL", (IPI_LEVEL - 2)},
RAW("#endif"),

HEADER("Stack sizes"),
CONSTANT(KERNEL_STACK_SIZE),
CONSTANT(KERNEL_LARGE_STACK_SIZE),
CONSTANT(KERNEL_LARGE_STACK_COMMIT),
//CONSTANT(DOUBLE_FAULT_STACK_SIZE),
#ifdef _M_AMD64
CONSTANT(KERNEL_MCA_EXCEPTION_STACK_SIZE),
CONSTANT(NMI_STACK_SIZE),
#endif

//HEADER("Thread flags"),
//CONSTANT(THREAD_FLAGS_CYCLE_PROFILING),
//CONSTANT(THREAD_FLAGS_CYCLE_PROFILING_LOCK_BIT),
//CONSTANT(THREAD_FLAGS_CYCLE_PROFILING_LOCK),
//CONSTANT(THREAD_FLAGS_COUNTER_PROFILING),
//CONSTANT(THREAD_FLAGS_COUNTER_PROFILING_LOCK_BIT),
//CONSTANT(THREAD_FLAGS_COUNTER_PROFILING_LOCK),
//CONSTANT(THREAD_FLAGS_CPU_THROTTLED),
//CONSTANT(THREAD_FLAGS_CPU_THROTTLED_BIT),
//CONSTANT(THREAD_FLAGS_ACCOUNTING_ANY),

HEADER("Miscellaneous Definitions"),
//CONSTANT(BASE_PRIORITY_THRESHOLD),
//CONSTANT(EVENT_PAIR_INCREMENT),
CONSTANT(LOW_REALTIME_PRIORITY),
CONSTANT(CLOCK_QUANTUM_DECREMENT),
//CONSTANT(READY_SKIP_QUANTUM),
//CONSTANT(THREAD_QUANTUM),
CONSTANT(WAIT_QUANTUM_DECREMENT),
//CONSTANT(ROUND_TRIP_DECREMENT_COUNT),
CONSTANT(MAXIMUM_PROCESSORS),
CONSTANT(INITIAL_STALL_COUNT),
//CONSTANT(EXCEPTION_EXECUTE_FAULT),
//CONSTANT(KCACHE_ERRATA_MONITOR_FLAGS),
//CONSTANT(KI_EXCEPTION_GP_FAULT),
//CONSTANT(KI_EXCEPTION_INVALID_OP),
//CONSTANT(KI_EXCEPTION_INTEGER_DIVIDE_BY_ZERO),
CONSTANT(KI_EXCEPTION_ACCESS_VIOLATION),
//CONSTANT(TARGET_FREEZE),
//CONSTANT(BlackHole),
CONSTANT(Executive),
CONSTANT(FALSE),
CONSTANT(TRUE),
CONSTANT(DBG_STATUS_CONTROL_C),
//CONSTANTPTR(USER_SHARED_DATA), // FIXME: we need the kernel mode address here!
//CONSTANT(MM_SHARED_USER_DATA_VA),
CONSTANT(PAGE_SIZE),
//CONSTANT(KERNEL_STACK_CONTROL_LARGE_STACK),
//CONSTANT(KI_DPC_ALL_FLAGS),
//CONSTANT(DISPATCH_LENGTH),
//CONSTANT(MAXIMUM_PRIMARY_VECTOR),
//CONSTANT(KTHREAD_AUTO_ALIGNMENT_BIT),
//CONSTANT(KTHREAD_GUI_THREAD_MASK),
//CONSTANT(KI_SLIST_FAULT_COUNT_MAXIMUM),
#ifndef _M_ARM
CONSTANT(MAXIMUM_IDTVECTOR),
CONSTANT(PRIMARY_VECTOR_BASE),
CONSTANT(RPL_MASK),
CONSTANT(MODE_MASK),
CONSTANT(NUMBER_SERVICE_TABLES),
CONSTANT(SERVICE_NUMBER_MASK),
CONSTANT(SERVICE_TABLE_SHIFT),
CONSTANT(SERVICE_TABLE_MASK),
CONSTANT(SERVICE_TABLE_TEST),
#endif



/* STRUCTURE OFFSETS *********************************************************/

//HEADER("KAFFINITY_EX"),
//OFFSET(AfBitmap, KAFFINITY_EX, Bitmap),

//HEADER("Aligned Affinity"),
//OFFSET(AfsCpuSet, ???, CpuSet),

HEADER("KAPC"),
OFFSET(ApType, KAPC, Type),
OFFSET(ApSize, KAPC, Size),
OFFSET(ApThread, KAPC, Thread),
OFFSET(ApApcListEntry, KAPC, ApcListEntry),
OFFSET(ApKernelRoutine, KAPC, KernelRoutine),
OFFSET(ApRundownRoutine, KAPC, RundownRoutine),
OFFSET(ApNormalRoutine, KAPC, NormalRoutine),
OFFSET(ApNormalContext, KAPC, NormalContext),
OFFSET(ApSystemArgument1, KAPC, SystemArgument1),
OFFSET(ApSystemArgument2, KAPC, SystemArgument2),
OFFSET(ApApcStateIndex, KAPC, ApcStateIndex),
OFFSET(ApApcMode, KAPC, ApcMode),
OFFSET(ApInserted, KAPC, Inserted),
SIZE(ApcObjectLength, KAPC),

HEADER("KAPC_STATE"),
OFFSET(AsApcListHead, KAPC_STATE, ApcListHead),
OFFSET(AsProcess, KAPC_STATE, Process),
OFFSET(AsKernelApcInProgress, KAPC_STATE, KernelApcInProgress),
OFFSET(AsKernelApcPending, KAPC_STATE, KernelApcPending),
OFFSET(AsUserApcPending, KAPC_STATE, UserApcPending),

HEADER("CLIENT_ID"),
OFFSET(CidUniqueProcess, CLIENT_ID, UniqueProcess),
OFFSET(CidUniqueThread, CLIENT_ID, UniqueThread),

HEADER("RTL_CRITICAL_SECTION"),
OFFSET(CsDebugInfo, RTL_CRITICAL_SECTION, DebugInfo),
OFFSET(CsLockCount, RTL_CRITICAL_SECTION, LockCount),
OFFSET(CsRecursionCount, RTL_CRITICAL_SECTION, RecursionCount),
OFFSET(CsOwningThread, RTL_CRITICAL_SECTION, OwningThread),
OFFSET(CsLockSemaphore, RTL_CRITICAL_SECTION, LockSemaphore),
OFFSET(CsSpinCount, RTL_CRITICAL_SECTION, SpinCount),

HEADER("RTL_CRITICAL_SECTION_DEBUG"),
OFFSET(CsType, RTL_CRITICAL_SECTION_DEBUG, Type),
OFFSET(CsCreatorBackTraceIndex, RTL_CRITICAL_SECTION_DEBUG, CreatorBackTraceIndex),
OFFSET(CsCriticalSection, RTL_CRITICAL_SECTION_DEBUG, CriticalSection),
OFFSET(CsProcessLocksList, RTL_CRITICAL_SECTION_DEBUG, ProcessLocksList),
OFFSET(CsEntryCount, RTL_CRITICAL_SECTION_DEBUG, EntryCount),
OFFSET(CsContentionCount, RTL_CRITICAL_SECTION_DEBUG, ContentionCount),

HEADER("KDEVICE_QUEUE_ENTRY"),
OFFSET(DeDeviceListEntry, KDEVICE_QUEUE_ENTRY, DeviceListEntry),
OFFSET(DeSortKey, KDEVICE_QUEUE_ENTRY, SortKey),
OFFSET(DeInserted, KDEVICE_QUEUE_ENTRY, Inserted),
SIZE(DeviceQueueEntryLength, KDEVICE_QUEUE_ENTRY),

HEADER("KDPC"),
OFFSET(DpType, KDPC, Type),
OFFSET(DpImportance, KDPC, Importance),
OFFSET(DpNumber, KDPC, Number),
OFFSET(DpDpcListEntry, KDPC, DpcListEntry),
OFFSET(DpDeferredRoutine, KDPC, DeferredRoutine),
OFFSET(DpDeferredContext, KDPC, DeferredContext),
OFFSET(DpSystemArgument1, KDPC, SystemArgument1),
OFFSET(DpSystemArgument2, KDPC, SystemArgument2),
OFFSET(DpDpcData, KDPC, DpcData),
SIZE(DpcObjectLength, KDPC),

HEADER("KDEVICE_QUEUE"),
OFFSET(DvType, KDEVICE_QUEUE, Type),
OFFSET(DvSize, KDEVICE_QUEUE, Size),
OFFSET(DvDeviceListHead, KDEVICE_QUEUE, DeviceListHead),
OFFSET(DvSpinLock, KDEVICE_QUEUE, Lock),
OFFSET(DvBusy, KDEVICE_QUEUE, Busy),
SIZE(DeviceQueueObjectLength, KDEVICE_QUEUE),

HEADER("EXCEPTION_RECORD"),
OFFSET(ErExceptionCode, EXCEPTION_RECORD, ExceptionCode),
OFFSET(ErExceptionFlags, EXCEPTION_RECORD, ExceptionFlags),
OFFSET(ErExceptionRecord, EXCEPTION_RECORD, ExceptionRecord),
OFFSET(ErExceptionAddress, EXCEPTION_RECORD, ExceptionAddress),
OFFSET(ErNumberParameters, EXCEPTION_RECORD, NumberParameters),
OFFSET(ErExceptionInformation, EXCEPTION_RECORD, ExceptionInformation),
SIZE(ExceptionRecordLength, EXCEPTION_RECORD),
SIZE(EXCEPTION_RECORD_LENGTH, EXCEPTION_RECORD),

HEADER("EPROCESS"),
OFFSET(EpDebugPort, EPROCESS, DebugPort),
OFFSET(EpVdmObjects, EPROCESS, VdmObjects),
SIZE(ExecutiveProcessObjectLength, EPROCESS),

HEADER("KEVENT"),
OFFSET(EvType, KEVENT, Header.Type),
OFFSET(EvSize, KEVENT, Header.Size),
OFFSET(EvSignalState, KEVENT, Header.SignalState),
OFFSET(EvWaitListHead, KEVENT, Header.WaitListHead),
SIZE(EventObjectLength, KEVENT),

HEADER("FAST_MUTEX"),
OFFSET(FmCount, FAST_MUTEX, Count),
OFFSET(FmOwner, FAST_MUTEX, Owner),
OFFSET(FmContention, FAST_MUTEX, Contention),
//OFFSET(FmGate, FAST_MUTEX, Gate),
OFFSET(FmOldIrql, FAST_MUTEX, OldIrql),

HEADER("KINTERRUPT"),
OFFSET(InType, KINTERRUPT, Type),
OFFSET(InSize, KINTERRUPT, Size),
OFFSET(InInterruptListEntry, KINTERRUPT, InterruptListEntry),
OFFSET(InServiceRoutine, KINTERRUPT, ServiceRoutine),
OFFSET(InServiceContext, KINTERRUPT, ServiceContext),
OFFSET(InSpinLock, KINTERRUPT, SpinLock),
OFFSET(InTickCount, KINTERRUPT, TickCount),
OFFSET(InActualLock, KINTERRUPT, ActualLock),
OFFSET(InDispatchAddress, KINTERRUPT, DispatchAddress),
OFFSET(InVector, KINTERRUPT, Vector),
OFFSET(InIrql, KINTERRUPT, Irql),
OFFSET(InSynchronizeIrql, KINTERRUPT, SynchronizeIrql),
OFFSET(InFloatingSave, KINTERRUPT, FloatingSave),
OFFSET(InConnected, KINTERRUPT, Connected),
OFFSET(InNumber, KINTERRUPT, Number),
OFFSET(InShareVector, KINTERRUPT, ShareVector),
OFFSET(InMode, KINTERRUPT, Mode),
OFFSET(InServiceCount, KINTERRUPT, ServiceCount),
OFFSET(InDispatchCount, KINTERRUPT, DispatchCount),
//OFFSET(InTrapFrame, KINTERRUPT, TrapFrame),
OFFSET(InDispatchCode, KINTERRUPT, DispatchCode),
SIZE(InterruptObjectLength, KINTERRUPT),

HEADER("IO_STATUS_BLOCK"),
OFFSET(IoStatus, IO_STATUS_BLOCK, Status),
OFFSET(IoPointer, IO_STATUS_BLOCK, Pointer),
OFFSET(IoInformation, IO_STATUS_BLOCK, Information),

//HEADER("KERNEL_STACK_CONTROL"),
#ifdef _M_IX86
//  Kernel Stack Control Structure Offset (relative to initial stack pointer) Definitions
//RELOFFSET(KcPreviousBase, KERNEL_STACK_CONTROL, PreviousBase, ???), -40
//RELOFFSET(KcPreviousLimit, KERNEL_STACK_CONTROL, PreviousBase, ???), -36
//RELOFFSET(KcPreviousKernel, KERNEL_STACK_CONTROL, PreviousBase, ???), -32
//RELOFFSET(KcPreviousInitial, KERNEL_STACK_CONTROL, PreviousBase, ???), -28
#else
//OFFSET(KcPreviousBase, KERNEL_STACK_CONTROL, PreviousBase),
//OFFSET(KcPreviousLimit, KERNEL_STACK_CONTROL, PreviousLimit),
//OFFSET(KcPreviousKernel, KERNEL_STACK_CONTROL, PreviousKernel),
//OFFSET(KcPreviousInitial, KERNEL_STACK_CONTROL, PreviousInitial),
//SIZE(KERNEL_STACK_CONTROL_LENGTH, KERNEL_STACK_CONTROL),
#endif

HEADER("KNODE"),
//OFFSET(KnRight, KNODE, Right),
//OFFSET(KnLeft, KNODE, Left),
OFFSET(KnPfnDereferenceSListHead, KNODE, PfnDereferenceSListHead),
OFFSET(KnProcessorMask, KNODE, ProcessorMask),
OFFSET(KnColor, KNODE, Color),
OFFSET(KnSeed, KNODE, Seed),
OFFSET(KnNodeNumber, KNODE, NodeNumber),
OFFSET(KnFlags, KNODE, Flags),
OFFSET(knMmShiftedColor, KNODE, MmShiftedColor),
OFFSET(KnFreeCount, KNODE, FreeCount),
OFFSET(KnPfnDeferredList, KNODE, PfnDeferredList),
SIZE(KNODE_SIZE, KNODE),

HEADER("KSPIN_LOCK_QUEUE"),
OFFSET(LqNext, KSPIN_LOCK_QUEUE, Next),
OFFSET(LqLock, KSPIN_LOCK_QUEUE, Lock),

HEADER("KLOCK_QUEUE_HANDLE"),
OFFSET(LqhNext, KLOCK_QUEUE_HANDLE, LockQueue.Next),
OFFSET(LqhLock, KLOCK_QUEUE_HANDLE, LockQueue.Lock),
OFFSET(LqhOldIrql, KLOCK_QUEUE_HANDLE, OldIrql),
SIZE(LOCK_QUEUE_HEADER_SIZE, KLOCK_QUEUE_HANDLE),

HEADER("LARGE_INTEGER"),
OFFSET(LiLowPart, LARGE_INTEGER, LowPart),
OFFSET(LiHighPart, LARGE_INTEGER, HighPart),
#if 0
HEADER("LOADER_PARAMETER_BLOCK (rel. to LoadOrderListHead)"),
RELOFFSET(LpbLoadOrderListHead, LOADER_PARAMETER_BLOCK, LoadOrderListHead, LoadOrderListHead),
RELOFFSET(LpbMemoryDescriptorListHead, LOADER_PARAMETER_BLOCK, MemoryDescriptorListHead, LoadOrderListHead),
RELOFFSET(LpbKernelStack, LOADER_PARAMETER_BLOCK, KernelStack, LoadOrderListHead),
RELOFFSET(LpbPrcb, LOADER_PARAMETER_BLOCK, Prcb, LoadOrderListHead),
RELOFFSET(LpbProcess, LOADER_PARAMETER_BLOCK, Process, LoadOrderListHead),
RELOFFSET(LpbThread, LOADER_PARAMETER_BLOCK, Thread, LoadOrderListHead),
RELOFFSET(LpbI386, LOADER_PARAMETER_BLOCK, u.I386, LoadOrderListHead),
RELOFFSET(LpbRegistryLength, LOADER_PARAMETER_BLOCK, RegistryLength, LoadOrderListHead),
RELOFFSET(LpbRegistryBase, LOADER_PARAMETER_BLOCK, RegistryBase, LoadOrderListHead),
RELOFFSET(LpbConfigurationRoot, LOADER_PARAMETER_BLOCK, ConfigurationRoot, LoadOrderListHead),
RELOFFSET(LpbArcBootDeviceName, LOADER_PARAMETER_BLOCK, ArcBootDeviceName, LoadOrderListHead),
RELOFFSET(LpbArcHalDeviceName, LOADER_PARAMETER_BLOCK, ArcHalDeviceName, LoadOrderListHead),
RELOFFSET(LpbLoadOptions, LOADER_PARAMETER_BLOCK, LoadOptions, LoadOrderListHead),
RELOFFSET(LpbExtension, LOADER_PARAMETER_BLOCK, Extension, LoadOrderListHead),
#endif

HEADER("LIST_ENTRY"),
OFFSET(LsFlink, LIST_ENTRY, Flink),
OFFSET(LsBlink, LIST_ENTRY, Blink),

HEADER("PEB"),
OFFSET(PeKernelCallbackTable, PEB, KernelCallbackTable),
SIZE(ProcessEnvironmentBlockLength, PEB),

HEADER("KPROFILE"),
OFFSET(PfType, KPROFILE, Type),
OFFSET(PfSize, KPROFILE, Size),
OFFSET(PfProfileListEntry, KPROFILE, ProfileListEntry),
OFFSET(PfProcess, KPROFILE, Process),
OFFSET(PfRangeBase, KPROFILE, RangeBase),
OFFSET(PfRangeLimit, KPROFILE, RangeLimit),
OFFSET(PfBucketShift, KPROFILE, BucketShift),
OFFSET(PfBuffer, KPROFILE, Buffer),
OFFSET(PfSegment, KPROFILE, Segment),
OFFSET(PfAffinity, KPROFILE, Affinity),
OFFSET(PfSource, KPROFILE, Source),
OFFSET(PfStarted, KPROFILE, Started),
SIZE(ProfileObjectLength, KPROFILE),

HEADER("PORT_MESSAGE"),
OFFSET(PmLength, PORT_MESSAGE, u1.Length),
OFFSET(PmZeroInit, PORT_MESSAGE, u2.ZeroInit),
OFFSET(PmClientId, PORT_MESSAGE, ClientId),
OFFSET(PmProcess, PORT_MESSAGE, ClientId.UniqueProcess),
OFFSET(PmThread, PORT_MESSAGE, ClientId.UniqueThread),
OFFSET(PmMessageId, PORT_MESSAGE, MessageId),
OFFSET(PmClientViewSize, PORT_MESSAGE, ClientViewSize),
SIZE(PortMessageLength, PORT_MESSAGE),

HEADER("KPROCESS"),
OFFSET(PrType, KPROCESS, Header.Type),
OFFSET(PrSize, KPROCESS, Header.Size),
OFFSET(PrSignalState, KPROCESS, Header.SignalState),
OFFSET(PrProfileListHead, KPROCESS, ProfileListHead),
OFFSET(PrDirectoryTableBase, KPROCESS, DirectoryTableBase),
#ifdef _M_IX86
OFFSET(PrLdtDescriptor, KPROCESS, LdtDescriptor),
OFFSET(PrIopmOffset, KPROCESS, IopmOffset),
OFFSET(PrInt21Descriptor, KPROCESS, Int21Descriptor),
OFFSET(PrVdmTrapcHandler, KPROCESS, VdmTrapcHandler),
//OFFSET(PrVdmObjects, KPROCESS, VdmObjects),
OFFSET(PrFlags, KPROCESS, Flags),
#endif
//OFFSET(PrInstrumentationCallback, KPROCESS, InstrumentationCallback),
OFFSET(PrActiveProcessors, KPROCESS, ActiveProcessors),
OFFSET(PrKernelTime, KPROCESS, KernelTime),
OFFSET(PrUserTime, KPROCESS, UserTime),
OFFSET(PrReadyListHead, KPROCESS, ReadyListHead),
OFFSET(PrSwapListEntry, KPROCESS, SwapListEntry),
OFFSET(PrThreadListHead, KPROCESS, ThreadListHead),
OFFSET(PrProcessLock, KPROCESS, ProcessLock),
OFFSET(PrAffinity, KPROCESS, Affinity),
OFFSET(PrProcessFlags, KPROCESS, ProcessFlags),
OFFSET(PrBasePriority, KPROCESS, BasePriority),
OFFSET(PrQuantumReset, KPROCESS, QuantumReset),
OFFSET(PrState, KPROCESS, State),
OFFSET(PrStackCount, KPROCESS, StackCount),
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
OFFSET(PrCycleTime, KPROCESS, CycleTime),
#endif
SIZE(KernelProcessObjectLength, KPROCESS),

HEADER("KQUEUE"),
OFFSET(QuType, KQUEUE, Header.Type),
OFFSET(QuSize, KQUEUE, Header.Size),
OFFSET(QuSignalState, KQUEUE, Header.SignalState),
OFFSET(QuEntryListHead, KQUEUE, EntryListHead),
OFFSET(QuCurrentCount, KQUEUE, CurrentCount),
OFFSET(QuMaximumCount, KQUEUE, MaximumCount),
OFFSET(QuThreadListHead, KQUEUE, ThreadListHead),
SIZE(QueueObjectLength, KQUEUE),

HEADER("STRING"),
OFFSET(StrLength, STRING, Length),
OFFSET(StrMaximumLength, STRING, MaximumLength),
OFFSET(StrBuffer, STRING, Buffer),

HEADER("TEB"),
OFFSET(TeCmTeb, TEB, NtTib),
#ifdef _M_IX86
OFFSET(TeExceptionList, TEB, NtTib.ExceptionList),
#endif
OFFSET(TeStackBase, TEB, NtTib.StackBase),
OFFSET(TeStackLimit, TEB, NtTib.StackLimit),
OFFSET(TeFiberData, TEB, NtTib.FiberData),
OFFSET(TeSelf, TEB, NtTib.Self),
OFFSET(TeEnvironmentPointer, TEB, EnvironmentPointer),
OFFSET(TeClientId, TEB, ClientId),
OFFSET(TeActiveRpcHandle, TEB, ActiveRpcHandle),
OFFSET(TeThreadLocalStoragePointer, TEB, ThreadLocalStoragePointer),
OFFSET(TeCountOfOwnedCriticalSections, TEB, CountOfOwnedCriticalSections),
OFFSET(TePeb, TEB, ProcessEnvironmentBlock),
OFFSET(TeCsrClientThread, TEB, CsrClientThread),
OFFSET(TeWOW32Reserved, TEB, WOW32Reserved),
//OFFSET(TeSoftFpcr, TEB, SoftFpcr),
OFFSET(TeExceptionCode, TEB, ExceptionCode),
OFFSET(TeActivationContextStackPointer, TEB, ActivationContextStackPointer),
OFFSET(TeGdiClientPID, TEB, GdiClientPID),
OFFSET(TeGdiClientTID, TEB, GdiClientTID),
OFFSET(TeGdiThreadLocalInfo, TEB, GdiThreadLocalInfo),
OFFSET(TeglDispatchTable, TEB, glDispatchTable),
OFFSET(TeglReserved1, TEB, glReserved1),
OFFSET(TeglReserved2, TEB, glReserved2),
OFFSET(TeglSectionInfo, TEB, glSectionInfo),
OFFSET(TeglSection, TEB, glSection),
OFFSET(TeglTable, TEB, glTable),
OFFSET(TeglCurrentRC, TEB, glCurrentRC),
OFFSET(TeglContext, TEB, glContext),
OFFSET(TeDeallocationStack, TEB, DeallocationStack),
OFFSET(TeTlsSlots, TEB, TlsSlots),
OFFSET(TeTlsExpansionSlots, TEB, TlsExpansionSlots),
OFFSET(TeLastErrorValue, TEB, LastErrorValue),
OFFSET(TeVdm, TEB, Vdm),
OFFSET(TeInstrumentation, TEB, Instrumentation),
OFFSET(TeGdiBatchCount, TEB, GdiBatchCount),
OFFSET(TeGuaranteedStackBytes, TEB, GuaranteedStackBytes),
OFFSET(TeFlsData, TEB, FlsData),
//OFFSET(TeProcessRundown, TEB, ProcessRundown),
SIZE(ThreadEnvironmentBlockLength, TEB),

HEADER("TIME_FIELDS"),
OFFSET(TfSecond, TIME_FIELDS, Second),
OFFSET(TfMinute, TIME_FIELDS, Minute),
OFFSET(TfHour, TIME_FIELDS, Hour),
OFFSET(TfWeekday, TIME_FIELDS, Weekday),
OFFSET(TfDay, TIME_FIELDS, Day),
OFFSET(TfMonth, TIME_FIELDS, Month),
OFFSET(TfYear, TIME_FIELDS, Year),
OFFSET(TfMilliseconds, TIME_FIELDS, Milliseconds),

HEADER("KTHREAD"),
OFFSET(ThType, KTHREAD, Header.Type),
//OFFSET(ThNpxIrql, KTHREAD, NpxIrql),
OFFSET(ThSize, KTHREAD, Header.Size),
OFFSET(ThLock, KTHREAD, Header.Lock),
OFFSET(ThDebugActive, KTHREAD, Header.DebugActive),
//OFFSET(ThThreadControlFlags, KTHREAD, DispatcherHeader.ThreadControlFlags),
OFFSET(ThSignalState, KTHREAD, Header.SignalState),
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
OFFSET(ThCycleTime, KTHREAD, CycleTime),
OFFSET(ThHighCycleTime, KTHREAD, HighCycleTime),
#endif
OFFSET(ThInitialStack, KTHREAD, InitialStack),
OFFSET(ThStackLimit, KTHREAD, StackLimit),
OFFSET(ThKernelStack, KTHREAD, KernelStack),
OFFSET(ThThreadLock, KTHREAD, ThreadLock),
//OFFSET(ThRunning, KTHREAD, Running),
OFFSET(ThAlerted, KTHREAD, Alerted),
//OFFSET(ThMiscFlags, KTHREAD, MiscFlags),
OFFSET(ThApcState, KTHREAD, ApcState),
OFFSET(ThPriority, KTHREAD, Priority),
OFFSET(ThSwapBusy, KTHREAD, SwapBusy),
OFFSET(ThNextProcessor, KTHREAD, NextProcessor),
OFFSET(ThDeferredProcessor, KTHREAD, DeferredProcessor),
OFFSET(ThApcQueueLock, KTHREAD, ApcQueueLock),
OFFSET(ThContextSwitches, KTHREAD, ContextSwitches),
OFFSET(ThState, KTHREAD, State),
OFFSET(ThNpxState, KTHREAD, NpxState),
OFFSET(ThWaitIrql, KTHREAD, WaitIrql),
OFFSET(ThWaitMode, KTHREAD, WaitMode),
OFFSET(ThWaitStatus, KTHREAD, WaitStatus),
OFFSET(ThWaitBlockList, KTHREAD, WaitBlockList),
OFFSET(ThGateObject, KTHREAD, GateObject),
OFFSET(ThWaitListEntry, KTHREAD, WaitListEntry),
OFFSET(ThSwapListEntry, KTHREAD, SwapListEntry),
OFFSET(ThQueue, KTHREAD, Queue),
OFFSET(ThWaitTime, KTHREAD, WaitTime),
OFFSET(ThCombinedApcDisable, KTHREAD, CombinedApcDisable),
OFFSET(ThKernelApcDisable, KTHREAD, KernelApcDisable),
OFFSET(ThSpecialApcDisable, KTHREAD, SpecialApcDisable),
OFFSET(ThTeb, KTHREAD, Teb),
OFFSET(ThTimer, KTHREAD, Timer),
OFFSET(ThThreadFlags, KTHREAD, ThreadFlags),
OFFSET(ThServiceTable, KTHREAD, ServiceTable),
OFFSET(ThWaitBlock, KTHREAD, WaitBlock),
OFFSET(ThResourceIndex, KTHREAD, ResourceIndex),
OFFSET(ThQueueListEntry, KTHREAD, QueueListEntry),
OFFSET(ThTrapFrame, KTHREAD, TrapFrame),
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
OFFSET(ThFirstArgument, KTHREAD, FirstArgument),
#endif
OFFSET(ThCallbackStack, KTHREAD, CallbackStack),
//OFFSET(ThCallbackDepth, KTHREAD, CallbackDepth),
OFFSET(ThApcStateIndex, KTHREAD, ApcStateIndex),
OFFSET(ThIdealProcessor, KTHREAD, IdealProcessor),
OFFSET(ThBasePriority, KTHREAD, BasePriority),
OFFSET(ThPriorityDecrement, KTHREAD, PriorityDecrement),
OFFSET(ThAdjustReason, KTHREAD, AdjustReason),
OFFSET(ThAdjustIncrement, KTHREAD, AdjustIncrement),
OFFSET(ThPreviousMode, KTHREAD, PreviousMode),
OFFSET(ThSaturation, KTHREAD, Saturation),
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
OFFSET(ThSystemCallNumber, KTHREAD, SystemCallNumber),
#endif
OFFSET(ThFreezeCount, KTHREAD, FreezeCount),
OFFSET(ThUserAffinity, KTHREAD, UserAffinity),
OFFSET(ThProcess, KTHREAD, Process),
OFFSET(ThAffinity, KTHREAD, Affinity),
OFFSET(ThUserIdealProcessor, KTHREAD, UserIdealProcessor),
OFFSET(ThApcStatePointer, KTHREAD, ApcStatePointer),
OFFSET(ThSavedApcState, KTHREAD, SavedApcState),
OFFSET(ThWaitReason, KTHREAD, WaitReason),
OFFSET(ThSuspendCount, KTHREAD, SuspendCount),
//OFFSET(ThCodePatchInProgress, KTHREAD, CodePatchInProgress),
OFFSET(ThWin32Thread, KTHREAD, Win32Thread),
OFFSET(ThStackBase, KTHREAD, StackBase),
OFFSET(ThSuspendApc, KTHREAD, SuspendApc),
OFFSET(ThPowerState, KTHREAD, PowerState),
OFFSET(ThKernelTime, KTHREAD, KernelTime),
OFFSET(ThLegoData, KTHREAD, LegoData),
OFFSET(ThLargeStack, KTHREAD, LargeStack),
OFFSET(ThUserTime, KTHREAD, UserTime),
OFFSET(ThSuspendSemaphore, KTHREAD, SuspendSemaphore),
OFFSET(ThSListFaultCount, KTHREAD, SListFaultCount),
OFFSET(ThThreadListEntry, KTHREAD, ThreadListEntry),
OFFSET(ThMutantListHead, KTHREAD, MutantListHead),
OFFSET(ThSListFaultAddress, KTHREAD, SListFaultAddress),
SIZE(KernelThreadObjectLength, KTHREAD),
SIZE(ExecutiveThreadObjectLength, ETHREAD),

HEADER("KTIMER"),
OFFSET(TiType, KTIMER, Header.Type),
OFFSET(TiSize, KTIMER, Header.Size),
OFFSET(TiInserted, KTIMER, Header.Inserted),
OFFSET(TiSignalState, KTIMER, Header.SignalState),
OFFSET(TiDueTime, KTIMER, DueTime),
OFFSET(TiTimerListEntry, KTIMER, TimerListEntry),
OFFSET(TiDpc, KTIMER, Dpc),
OFFSET(TiPeriod, KTIMER, Period),
SIZE(TimerObjectLength, KTIMER),

HEADER("TIME"),
//OFFSET(TmLowTime, TIME, LowTime),
//OFFSET(TmHighTime, TIME, HighTime),

#if 0
HEADER("SYSTEM_CONTEXT_SWITCH_INFORMATION (relative to FindAny)"),
RELOFFSET(TwFindAny, SYSTEM_CONTEXT_SWITCH_INFORMATION, FindAny, FindAny),
RELOFFSET(TwFindIdeal, SYSTEM_CONTEXT_SWITCH_INFORMATION, FindIdeal, FindAny),
RELOFFSET(TwFindLast, SYSTEM_CONTEXT_SWITCH_INFORMATION, FindLast, FindAny),
RELOFFSET(TwIdleAny, SYSTEM_CONTEXT_SWITCH_INFORMATION, IdleAny, FindAny),
RELOFFSET(TwIdleCurrent, SYSTEM_CONTEXT_SWITCH_INFORMATION, IdleCurrent, FindAny),
RELOFFSET(TwIdleIdeal, SYSTEM_CONTEXT_SWITCH_INFORMATION, IdleIdeal, FindAny),
RELOFFSET(TwIdleLast, SYSTEM_CONTEXT_SWITCH_INFORMATION, IdleLast, FindAny),
RELOFFSET(TwPreemptAny, SYSTEM_CONTEXT_SWITCH_INFORMATION, PreemptAny, FindAny),
RELOFFSET(TwPreemptCurrent, SYSTEM_CONTEXT_SWITCH_INFORMATION, PreemptCurrent, FindAny),
RELOFFSET(TwPreemptLast, SYSTEM_CONTEXT_SWITCH_INFORMATION, PreemptLast, FindAny),
RELOFFSET(TwSwitchToIdle, SYSTEM_CONTEXT_SWITCH_INFORMATION, SwitchToIdle, FindAny),
#endif

HEADER("KUSER_SHARED_DATA"),
OFFSET(UsTickCountMultiplier, KUSER_SHARED_DATA, TickCountMultiplier),
OFFSET(UsInterruptTime, KUSER_SHARED_DATA, InterruptTime),
OFFSET(UsSystemTime, KUSER_SHARED_DATA, SystemTime),
OFFSET(UsTimeZoneBias, KUSER_SHARED_DATA, TimeZoneBias),
OFFSET(UsImageNumberLow, KUSER_SHARED_DATA, ImageNumberLow),
OFFSET(UsImageNumberHigh, KUSER_SHARED_DATA, ImageNumberHigh),
OFFSET(UsNtSystemRoot, KUSER_SHARED_DATA, NtSystemRoot),
OFFSET(UsMaxStackTraceDepth, KUSER_SHARED_DATA, MaxStackTraceDepth),
OFFSET(UsCryptoExponent, KUSER_SHARED_DATA, CryptoExponent),
OFFSET(UsTimeZoneId, KUSER_SHARED_DATA, TimeZoneId),
OFFSET(UsLargePageMinimum, KUSER_SHARED_DATA, LargePageMinimum),
OFFSET(UsReserved2, KUSER_SHARED_DATA, Reserved2),
OFFSET(UsNtProductType, KUSER_SHARED_DATA, NtProductType),
OFFSET(UsProductTypeIsValid, KUSER_SHARED_DATA, ProductTypeIsValid),
OFFSET(UsNtMajorVersion, KUSER_SHARED_DATA, NtMajorVersion),
OFFSET(UsNtMinorVersion, KUSER_SHARED_DATA, NtMinorVersion),
OFFSET(UsProcessorFeatures, KUSER_SHARED_DATA, ProcessorFeatures),
OFFSET(UsReserved1, KUSER_SHARED_DATA, Reserved1),
OFFSET(UsReserved3, KUSER_SHARED_DATA, Reserved3),
OFFSET(UsTimeSlip, KUSER_SHARED_DATA, TimeSlip),
OFFSET(UsAlternativeArchitecture, KUSER_SHARED_DATA, AlternativeArchitecture),
OFFSET(UsSystemExpirationDate, KUSER_SHARED_DATA, SystemExpirationDate),
OFFSET(UsSuiteMask, KUSER_SHARED_DATA, SuiteMask),
OFFSET(UsKdDebuggerEnabled, KUSER_SHARED_DATA, KdDebuggerEnabled),
OFFSET(UsActiveConsoleId, KUSER_SHARED_DATA, ActiveConsoleId),
OFFSET(UsDismountCount, KUSER_SHARED_DATA, DismountCount),
OFFSET(UsComPlusPackage, KUSER_SHARED_DATA, ComPlusPackage),
OFFSET(UsLastSystemRITEventTickCount, KUSER_SHARED_DATA, LastSystemRITEventTickCount),
OFFSET(UsNumberOfPhysicalPages, KUSER_SHARED_DATA, NumberOfPhysicalPages),
OFFSET(UsSafeBootMode, KUSER_SHARED_DATA, SafeBootMode),
//OFFSET(UsTscQpcData, KUSER_SHARED_DATA, TscQpcData),
OFFSET(UsTestRetInstruction, KUSER_SHARED_DATA, TestRetInstruction),
OFFSET(UsSystemCall, KUSER_SHARED_DATA, SystemCall),
OFFSET(UsSystemCallReturn, KUSER_SHARED_DATA, SystemCallReturn),
OFFSET(UsSystemCallPad, KUSER_SHARED_DATA, SystemCallPad),
OFFSET(UsTickCount, KUSER_SHARED_DATA, TickCount),
OFFSET(UsTickCountQuad, KUSER_SHARED_DATA, TickCountQuad),
OFFSET(UsWow64SharedInformation, KUSER_SHARED_DATA, Wow64SharedInformation),

HEADER("KWAIT_BLOCK"),
OFFSET(WbWaitListEntry, KWAIT_BLOCK, WaitListEntry),
OFFSET(WbThread, KWAIT_BLOCK, Thread),
OFFSET(WbObject, KWAIT_BLOCK, Object),
OFFSET(WbNextWaitBlock, KWAIT_BLOCK, NextWaitBlock),
OFFSET(WbWaitKey, KWAIT_BLOCK, WaitKey),
OFFSET(WbWaitType, KWAIT_BLOCK, WaitType),

