//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBCompleteProfileMegaphoneView, FBMemPage, FBMemProfileQuestion, UIView;

@protocol FBCompleteProfileMegaphoneViewDelegate <NSObject>
- (void)closeMegaphone:(FBCompleteProfileMegaphoneView *)arg1;
- (void)completeProfileMegaphoneViewStateDidChange:(FBCompleteProfileMegaphoneView *)arg1 withRowAnimation:(long long)arg2;
- (void)completeProfileMegaphoneViewDidTapPrivacySelector:(FBCompleteProfileMegaphoneView *)arg1 withPrivacyButton:(UIView *)arg2;
- (void)completeProfileMegaphoneView:(FBCompleteProfileMegaphoneView *)arg1 didTapSaveButtonWithSelectedPage:(FBMemPage *)arg2;
- (void)completeProfileMegaphoneViewDidTapSkipButton:(FBCompleteProfileMegaphoneView *)arg1;
- (void)completeProfileMegaphoneView:(FBCompleteProfileMegaphoneView *)arg1 didTapTypeaheadRowForProfileQuestion:(FBMemProfileQuestion *)arg2;
@end

