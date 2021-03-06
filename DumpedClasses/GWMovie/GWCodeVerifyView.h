//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GWCaptchInfo, GWGetCaptchaProvider, GWImagePolicyView, GWValidCaptchaProvider, MBProgressHUD, UILabel, UITextField;

@interface GWCodeVerifyView : UIView
{
    CDUnknownBlockType _dismissPopView;
    UILabel *_messageLabel;
    GWImagePolicyView *_codeImageView;
    UITextField *_textField;
    GWGetCaptchaProvider *_getCaptchaProvider;
    GWValidCaptchaProvider *_validCaptchaProvider;
    GWCaptchInfo *_captchInfo;
    MBProgressHUD *_progressHUD;
    struct CGRect _orginFrame;
}

@property(nonatomic) struct CGRect orginFrame; // @synthesize orginFrame=_orginFrame;
@property(retain, nonatomic) MBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) GWCaptchInfo *captchInfo; // @synthesize captchInfo=_captchInfo;
@property(retain, nonatomic) GWValidCaptchaProvider *validCaptchaProvider; // @synthesize validCaptchaProvider=_validCaptchaProvider;
@property(retain, nonatomic) GWGetCaptchaProvider *getCaptchaProvider; // @synthesize getCaptchaProvider=_getCaptchaProvider;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) GWImagePolicyView *codeImageView; // @synthesize codeImageView=_codeImageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(copy, nonatomic) CDUnknownBlockType dismissPopView; // @synthesize dismissPopView=_dismissPopView;
- (void).cxx_destruct;
- (void)dismissAction;
- (void)resignCodeViewFirstResponder;
- (id)createLabelWithFont:(id)arg1 textAli:(long long)arg2 textColor:(id)arg3;
- (void)setMessageLabelText:(id)arg1;
- (void)tapAction;
- (void)confirmAtion;
- (void)loadAllControls;
- (void)handleCurrentCodeImage;
- (void)requestValidCaptcha;
- (void)requestGetCaptcha;
- (void)dealloc;
- (void)createRightTopButton;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

