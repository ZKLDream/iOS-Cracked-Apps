//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTFlightCostDetailsFullScreenMaskView, UITapGestureRecognizer, UIView;

@protocol CTFlightCostDetailsDelegate <NSObject>

@optional
- (void)maskView:(CTFlightCostDetailsFullScreenMaskView *)arg1 willRemoveFromSuperView:(UIView *)arg2;
- (void)beforeScreenMaskHide:(CTFlightCostDetailsFullScreenMaskView *)arg1 gestureRecognizer:(UITapGestureRecognizer *)arg2;
- (void)beforeScreenMaskHide;
@end

