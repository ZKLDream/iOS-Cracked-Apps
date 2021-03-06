//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALBBTradeService.h"

@class ALBBTradeTaokeParams, NSDictionary, NSNumber, NSString, TaeWebViewUISettings, UIViewController;

@protocol ALBBItemService <ALBBTradeService>
- (void)showTaoKeItemDetailByOpenId:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(TaeWebViewUISettings *)arg3 itemId:(NSString *)arg4 itemType:(long long)arg5 params:(NSDictionary *)arg6 taoKeParams:(ALBBTradeTaokeParams *)arg7 tradeProcessSuccessCallback:(void (^)(ALBBTradeResult *))arg8 tradeProcessFailedCallback:(void (^)(NSError *))arg9;
- (void)showTaoKeItemDetailByItemId:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(TaeWebViewUISettings *)arg3 itemId:(NSNumber *)arg4 itemType:(long long)arg5 params:(NSDictionary *)arg6 taoKeParams:(ALBBTradeTaokeParams *)arg7 tradeProcessSuccessCallback:(void (^)(ALBBTradeResult *))arg8 tradeProcessFailedCallback:(void (^)(NSError *))arg9;
- (void)showItemDetailByOpenId:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(TaeWebViewUISettings *)arg3 itemId:(NSString *)arg4 itemType:(long long)arg5 params:(NSDictionary *)arg6 tradeProcessSuccessCallback:(void (^)(ALBBTradeResult *))arg7 tradeProcessFailedCallback:(void (^)(NSError *))arg8;
- (void)showItemDetailByItemId:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 webViewUISettings:(TaeWebViewUISettings *)arg3 itemId:(NSNumber *)arg4 itemType:(long long)arg5 params:(NSDictionary *)arg6 tradeProcessSuccessCallback:(void (^)(ALBBTradeResult *))arg7 tradeProcessFailedCallback:(void (^)(NSError *))arg8;
- (void)showPage:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 pageUrl:(NSString *)arg3 webViewUISettings:(TaeWebViewUISettings *)arg4 tradeProcessSuccessCallback:(void (^)(ALBBTradeResult *))arg5 tradeProcessFailedCallback:(void (^)(NSError *))arg6;
- (void)showPage:(UIViewController *)arg1 isNeedPush:(_Bool)arg2 openUrl:(NSString *)arg3;
@end

