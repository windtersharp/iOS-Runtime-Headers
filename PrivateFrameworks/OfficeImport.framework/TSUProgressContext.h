/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUProgressStage, NSDate;



@interface TSUProgressContext : NSObject 
{
    TSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    double m_lastProgressReport;
}

+ (id)sharedContext;
+ (void)createStageWithSteps:(double)arg1;
+ (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
+ (double)overallProgress;
+ (id)_singletonAlloc;
+ (void)setPercentageProgressFromCPProgressContext:(double)arg1;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeProgressObserver:(id)arg1;
+ (double)currentPosition;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)advanceProgress:(double)arg1;
+ (void)endStage;
+ (void)setMessage:(id)arg1;
+ (void)reset;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)setProgress:(double)arg1;

- (id)currentStage;
- (void)reportProgress:(double)arg1;
- (void)_reset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)retainCount;
- (id)init;
- (void)release;
- (id)retain;
- (id)autorelease;
- (void)dealloc;

@end