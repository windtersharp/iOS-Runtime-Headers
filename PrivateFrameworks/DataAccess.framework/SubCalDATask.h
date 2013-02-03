/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DATaskManager;

@interface SubCalDATask : NSObject <DATask> {
    BOOL _finished;
    DATaskManager *_taskManager;
}

@property DATaskManager *taskManager;

- (void)cancelTaskWithReason:(NSInteger)arg1 underlyingError:(id)arg2;
- (id)consumerDictKey;
- (void)dealloc;
- (void)didFinish;
- (void)finishWithError:(id)arg1;
- (void)performDelegateCallbackWithError:(id)arg1;
- (void)performTask;
- (void)setTaskManager:(id)arg1;
- (id)taskManager;
- (void)willFinish;

@end