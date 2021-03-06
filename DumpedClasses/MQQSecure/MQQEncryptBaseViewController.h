//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MMQQEncryptAnswerQuestionsViewControllerDelegate-Protocol.h"
#import "MQQAlertViewDelegate-Protocol.h"
#import "MQQDigitsPasswordViewDelegate-Protocol.h"
#import "MQQLoginViewControllerDelegate-Protocol.h"
#import "MQQSecretAlbumPasswordControllerDelegate-Protocol.h"

@class MQQDigitsPasswordTouchIDInputView, MQQDigitsPasswordView, MQQEncryptAnswerQuestionsViewController, NSString;

@interface MQQEncryptBaseViewController : MQQBaseViewController <MQQDigitsPasswordViewDelegate, MMQQEncryptAnswerQuestionsViewControllerDelegate, MQQSecretAlbumPasswordControllerDelegate, MQQLoginViewControllerDelegate, MQQAlertViewDelegate>
{
    MQQDigitsPasswordView *_passwordView;
    _Bool _shouldVerifyTouchID;
    MQQDigitsPasswordTouchIDInputView *_touchIDInputView;
    NSString *_inputPassword;
    MQQEncryptAnswerQuestionsViewController *_answerQuestionsViewController;
}

@property(retain, nonatomic) MQQEncryptAnswerQuestionsViewController *answerQuestionsViewController; // @synthesize answerQuestionsViewController=_answerQuestionsViewController;
@property(copy, nonatomic) NSString *inputPassword; // @synthesize inputPassword=_inputPassword;
- (void)encryptAnswerQuestionsViewController:(id)arg1 isCorrectAnswer:(_Bool)arg2;
- (void)tipsOkButtonClicked:(id)arg1;
- (void)showPasswordTips;
- (void)digitsPasswordView:(id)arg1 wasInputWithPassword:(id)arg2;
- (void)mqqAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)importantNoticeButtonClicked:(id)arg1;
- (void)findPasswordButtonClicked:(id)arg1;
- (_Bool)popTouchIDViewController:(id)arg1;
- (void)passVerification:(_Bool)arg1;
- (void)fillSecretQuestions;
- (void)willVerify;
- (void)didPassVerification:(_Bool)arg1;
- (void)loadFindPasswordButton;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showTouchIDVerificationView:(CDUnknownBlockType)arg1;
- (void)refreshImportantNoticeTip;
- (void)updatePasswordView:(_Bool)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

