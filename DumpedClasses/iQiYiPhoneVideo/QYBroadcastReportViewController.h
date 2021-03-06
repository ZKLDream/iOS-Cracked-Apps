//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYBroadcastInputMsgViewDelegate-Protocol.h"
#import "QYBroadcastListCellViewDelegate-Protocol.h"
#import "QYChatRoomHideKeyboardViewDelegate-Protocol.h"

@class IQYChatRoomTipoffManager, NSMutableArray, NSString, QYBroadcastInputMsgView, QYChatRoomHideKeyboardView, QYReportInfoModel, UIScrollView;
@protocol QYBroadcastReportViewControllerDelegate;

@interface QYBroadcastReportViewController : QYCommonViewController <QYBroadcastInputMsgViewDelegate, QYBroadcastListCellViewDelegate, IQYDataLoadManagerDelegate, QYChatRoomHideKeyboardViewDelegate>
{
    _Bool _isReport;
    QYReportInfoModel *_liveMessage;
    id <QYBroadcastReportViewControllerDelegate> _delegate;
    NSMutableArray *_titleArray;
    QYBroadcastInputMsgView *_msgView;
    NSString *_userMessage;
    NSString *_message;
    NSMutableArray *_msgArray;
    UIScrollView *_scrollView;
    IQYChatRoomTipoffManager *_tipOffManager;
    QYChatRoomHideKeyboardView *_hideKeyboardView;
}

@property(nonatomic) _Bool isReport; // @synthesize isReport=_isReport;
@property(retain, nonatomic) QYChatRoomHideKeyboardView *hideKeyboardView; // @synthesize hideKeyboardView=_hideKeyboardView;
@property(retain, nonatomic) IQYChatRoomTipoffManager *tipOffManager; // @synthesize tipOffManager=_tipOffManager;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *msgArray; // @synthesize msgArray=_msgArray;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *userMessage; // @synthesize userMessage=_userMessage;
@property(retain, nonatomic) QYBroadcastInputMsgView *msgView; // @synthesize msgView=_msgView;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
@property(nonatomic) id <QYBroadcastReportViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QYReportInfoModel *liveMessage; // @synthesize liveMessage=_liveMessage;
- (void)hideKeyboard;
- (void)setSaveBtnEnabled:(_Bool)arg1;
- (void)onCellViewClicked:(id)arg1 selected:(_Bool)arg2;
- (void)onMsgViewTextLimit;
- (void)onMsgViewChanged:(id)arg1;
- (void)reportMessage:(id)arg1;
- (void)dealloc;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)createSubViews;
- (void)createDataManager;
- (void)didReceiveMemoryWarning;
- (void)dismissKeyboard:(id)arg1;
- (void)removeHideKeyboardViewFromSuperView;
- (void)addHideKeyboardView;
- (_Bool)shouldHideKeyboardWithPoint:(struct CGPoint)arg1;
- (void)showKeyboard:(id)arg1;
- (void)removeNotification;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)registerNotification;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

