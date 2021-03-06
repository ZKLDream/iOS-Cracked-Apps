//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPlayerVideoListWithBlockWithHeaderViewBasePhone.h"

@class QYPlayerSpoilerViewPhone;

@interface QYPlayerVideoListWithBlockWithHeaderViewPhone : QYPlayerVideoListWithBlockWithHeaderViewBasePhone
{
    int _location;
    CDUnknownBlockType _requestFloatNewSpoilerData;
    CDUnknownBlockType _headerTabClickPingbackBlock;
    QYPlayerSpoilerViewPhone *_spoilerView;
}

@property(retain, nonatomic) QYPlayerSpoilerViewPhone *spoilerView; // @synthesize spoilerView=_spoilerView;
@property(copy, nonatomic) CDUnknownBlockType headerTabClickPingbackBlock; // @synthesize headerTabClickPingbackBlock=_headerTabClickPingbackBlock;
@property(copy, nonatomic) CDUnknownBlockType requestFloatNewSpoilerData; // @synthesize requestFloatNewSpoilerData=_requestFloatNewSpoilerData;
@property(nonatomic) int location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)sendHeaderTabPingbackWithType:(unsigned long long)arg1;
- (void)updateRelatedSpoilerIndexPath:(id)arg1;
- (void)headerCancelBtnAction;
- (void)removeSpoilerView;
- (void)hidePlayerSpoilerView;
- (void)showPlayerSpoilerView;
- (void)reloadSpoilerData:(id)arg1;

@end

