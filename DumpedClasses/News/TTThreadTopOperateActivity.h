//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTActivityProtocol.h"

@class NSString, UIViewController;

@interface TTThreadTopOperateActivity : NSObject <TTActivityProtocol>
{
    id <TTActivityContentItemProtocol> _contentItem;
}

@property(retain, nonatomic) id <TTActivityContentItemProtocol> contentItem; // @synthesize contentItem=_contentItem;
- (void).cxx_destruct;
- (id)shareLabel;
- (id)contentTitle;
- (id)activityImageName;
- (void)performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (id)activityType;
- (id)contentItemType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *presentingViewController;
@property(readonly) Class superclass;

@end

