//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KGRunBLL : NSObject
{
}

- (void)requestRunSongInfoWithId:(long long)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 andErrorBlock:(CDUnknownBlockType)arg3;
- (void)createShareUrlAndKugouMaWithRunSongList:(id)arg1 withRunPic:(id)arg2 withSuccessBlock:(CDUnknownBlockType)arg3 andErrorBlock:(CDUnknownBlockType)arg4;
- (void)requestRunnerCountAndSuccessBlock:(CDUnknownBlockType)arg1 andErrorBlock:(CDUnknownBlockType)arg2;
- (void)quitRunAndSuccessBlock:(CDUnknownBlockType)arg1 andErrorBlock:(CDUnknownBlockType)arg2;
- (void)joinRunAndSuccessBlock:(CDUnknownBlockType)arg1 andErrorBlock:(CDUnknownBlockType)arg2;

@end

