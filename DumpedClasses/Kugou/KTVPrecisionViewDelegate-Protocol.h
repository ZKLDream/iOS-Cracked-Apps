//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVPrecisionView, NSIndexPath;

@protocol KTVPrecisionViewDelegate <NSObject>

@optional
- (void)precisionView:(KTVPrecisionView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (void)precisionViewShouldLoadMoreData:(KTVPrecisionView *)arg1;
@end
