//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAPanGesView.h"

@class FAWebView, UIView;

@interface FACrazyCatchDollShowView : FAPanGesView
{
    CDUnknownBlockType _viewWillShowHandler;
    CDUnknownBlockType _viewDidDismissHandler;
    UIView *_bgView;
    FAWebView *_webView;
}

+ (_Bool)handleOpenURL:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) FAWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType viewDidDismissHandler; // @synthesize viewDidDismissHandler=_viewDidDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType viewWillShowHandler; // @synthesize viewWillShowHandler=_viewWillShowHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)closeHalfScreenGameView:(id)arg1;
- (id)clientTimeString;
- (long long)contentHeight;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)startLoadRequestWithKugouId:(long long)arg1 nickName:(id)arg2 userId:(long long)arg3 roomId:(long long)arg4 starId:(long long)arg5 starNickname:(id)arg6 source:(int)arg7 requestUrl:(id)arg8;
- (id)initWithFrame:(struct CGRect)arg1 withView:(id)arg2 kugouId:(long long)arg3 nickName:(id)arg4 userId:(long long)arg5 roomId:(long long)arg6 starId:(long long)arg7 starNickname:(id)arg8 source:(int)arg9 requestUrl:(id)arg10;

@end

