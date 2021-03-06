//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IOMArticleArticleData, IOMArticleAuthorInfo, IOMArticleLikeObject, IOMArticleRelatedProducts, IOMArticleShareInfo, IOMArticleStatusObject, IOMArticleVideoData, NSMutableArray;

@interface IOMArticleDetailObject : NSObject
{
    IOMArticleShareInfo *_shareInfo;
    IOMArticleVideoData *_videoData;
    IOMArticleAuthorInfo *_authorInfo;
    IOMArticleArticleData *_articleData;
    NSMutableArray *_tagArray;
    IOMArticleRelatedProducts *_relatedProducts;
    IOMArticleLikeObject *_likeObject;
    IOMArticleStatusObject *_statusObject;
    NSMutableArray *_recommendArticlesArray;
}

@property(retain, nonatomic) NSMutableArray *recommendArticlesArray; // @synthesize recommendArticlesArray=_recommendArticlesArray;
@property(retain, nonatomic) IOMArticleStatusObject *statusObject; // @synthesize statusObject=_statusObject;
@property(retain, nonatomic) IOMArticleLikeObject *likeObject; // @synthesize likeObject=_likeObject;
@property(retain, nonatomic) IOMArticleRelatedProducts *relatedProducts; // @synthesize relatedProducts=_relatedProducts;
@property(retain, nonatomic) NSMutableArray *tagArray; // @synthesize tagArray=_tagArray;
@property(retain, nonatomic) IOMArticleArticleData *articleData; // @synthesize articleData=_articleData;
@property(retain, nonatomic) IOMArticleAuthorInfo *authorInfo; // @synthesize authorInfo=_authorInfo;
@property(retain, nonatomic) IOMArticleVideoData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) IOMArticleShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
- (void).cxx_destruct;
- (void)parseDataDic:(id)arg1;

@end

