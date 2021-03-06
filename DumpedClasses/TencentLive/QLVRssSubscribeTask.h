//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLDataRequestModel.h"

@class NSString, QLJCEONAVRSSFeed;

@interface QLVRssSubscribeTask : QLDataRequestModel
{
    NSString *_uniqueId;
    CDUnknownBlockType _comBlock;
    QLJCEONAVRSSFeed *_jceVRssFeed;
}

+ (id)createTaskWithJCEItem:(id)arg1 complete:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) QLJCEONAVRSSFeed *jceVRssFeed; // @synthesize jceVRssFeed=_jceVRssFeed;
- (void).cxx_destruct;
- (void)requestDidCancelLoad:(id)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (void)requestDidFail:(id)arg1;
- (void)startSubscribeRquest:(unsigned long long)arg1;
- (id)initWithUniqueId:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)dealloc;
@property(readonly, nonatomic) NSString *taskId;

@end

