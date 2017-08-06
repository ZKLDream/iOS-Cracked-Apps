//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField;

@interface KTVUserInfoEditContactsView : UIView <UITextFieldDelegate>
{
    struct CGRect _frameKeyboard;
    unsigned int _textFieldCharsLimit;
    UIView *_mainContView;
    UIView *_bgAlphaView;
    UILabel *_titleLabel;
    UITextField *_editTextField;
    UIButton *_cancelBtn;
    UIButton *_confirmBtn;
    UIView *_horSeparator;
    UIView *_verSeparator;
    unsigned int _editContactsType;
    NSString *_title;
    NSString *_placeHolder;
    NSString *_editedContacts;
    id <KTVUserInfoEditContactsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <KTVUserInfoEditContactsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *editedContacts; // @synthesize editedContacts=_editedContacts;
@property(nonatomic) unsigned int editContactsType; // @synthesize editContactsType=_editContactsType;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (int)subStrCodeIdxTransferredWithRealIdx:(unsigned int)arg1 tarStr:(id)arg2;
- (long long)strGetlength:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardWillAppear:(id)arg1;
- (void)registerNotifications;
- (void)showErrorAdaptedWithStatus:(id)arg1 duration:(double)arg2;
- (void)textFieldDidChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)clickedBtn_TouchUp:(id)arg1;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dismiss;
- (void)show;
- (id)initWithTitle:(id)arg1 placeHolder:(id)arg2 editContactsType:(unsigned int)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
