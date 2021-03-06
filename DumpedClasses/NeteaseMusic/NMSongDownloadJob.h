//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMDownloadJob.h"

#import "NMDownloadRequestDelegate.h"

@class NMSong, NSString;

@interface NMSongDownloadJob : NMDownloadJob <NMDownloadRequestDelegate>
{
}

- (void)downloadProgress:(id)arg1 progress:(double)arg2;
- (void)downloadRequestWriteFileFailed:(id)arg1;
- (void)downloadFailed:(id)arg1;
- (void)downloadFinished:(id)arg1;
- (void)downloadCover;
- (void)_internalDownloadWithUrlInfo;
- (void)doDownloadSongViaNetwork;
- (void)_afterLoadMissedSongFilePrivateCloudFail;
- (void)downloadSongWithUrlInfo;
- (void)checkSongUrlInfo;
- (void)startDownloadJob;
@property(readonly, nonatomic) NMSong *song;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

