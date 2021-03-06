//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOMBaseViewController.h"

#import "IQYWebViewProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IOMSQLiveViewController, IOMURLHandler, NSMutableArray, NSString, UIButton;

@interface IOMSelectedQualityViewController : IOMBaseViewController <UIScrollViewDelegate, IQYWebViewProtocol>
{
    NSMutableArray *_urlStrArray;
    IOMSQLiveViewController *_sqLiveViewController;
    NSMutableArray *_webViewArray;
    IOMURLHandler *_urlHandler;
    NSString *_backRefreshURL;
    UIButton *_backToTopBtn;
}

@property(retain, nonatomic) UIButton *backToTopBtn; // @synthesize backToTopBtn=_backToTopBtn;
@property(retain, nonatomic) NSString *backRefreshURL; // @synthesize backRefreshURL=_backRefreshURL;
@property(retain, nonatomic) IOMURLHandler *urlHandler; // @synthesize urlHandler=_urlHandler;
@property(retain, nonatomic) NSMutableArray *webViewArray; // @synthesize webViewArray=_webViewArray;
@property(retain, nonatomic) IOMSQLiveViewController *sqLiveViewController; // @synthesize sqLiveViewController=_sqLiveViewController;
@property(retain, nonatomic) NSMutableArray *urlStrArray; // @synthesize urlStrArray=_urlStrArray;
- (void).cxx_destruct;
- (void)showClickToast:(id)arg1;
- (void)openGoodsDetail:(id)arg1;
- (void)openArticleViewController:(id)arg1;
- (void)openVideoDetailViewController:(id)arg1;
- (void)openVideoListViewController:(id)arg1;
- (void)openPortraitLiveDetailViewController:(id)arg1;
- (void)openLiveDetailViewController:(id)arg1;
- (void)openLiveListViewController:(id)arg1;
- (void)openWebView:(id)arg1;
- (void)handleUrlCut;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)handleTarget:(id)arg1;
- (void)refreshUI;
- (void)showLoginView;
- (void)shareCallBackAction:(id)arg1;
- (void)shareArticleWithTitle:(id)arg1 desc:(id)arg2 image:(id)arg3 url:(id)arg4;
- (void)backToTopBtnClicked;
- (void)initSQScrollView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

