//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, ONESmoothMoveBussiness, UIView;

@protocol ONESmoothMoveDataSource <NSObject>
- (void)smoothMoveBussiness:(ONESmoothMoveBussiness *)arg1 requireData:(void (^)(NSArray<ONESmoothPointModel> *))arg2;

@optional
- (void)smoothMoveBussinessDidUpdateDriverAnnotations:(ONESmoothMoveBussiness *)arg1;
- (void)smoothMoveBussiness:(ONESmoothMoveBussiness *)arg1 updateCalloutView:(UIView *)arg2 withDriverId:(NSString *)arg3 completion:(void (^)(void))arg4;
- (void)smoothMoveBussiness:(ONESmoothMoveBussiness *)arg1 createCalloutView:(void (^)(UIView *))arg2 withDriverId:(NSString *)arg3;
@end

