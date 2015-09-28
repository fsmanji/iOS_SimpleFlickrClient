//
//  Flickr.h
//  Flickr Search
//
//  Created by Brandon Trebitowski on 6/28/12.
//  Copyright (c) 2012 Brandon Trebitowski. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <FlickrKit.h>

@class FlickrPhoto;
@class UIImage;

typedef void (^FlickrSearchCompletionBlock)(NSString *searchTerm, NSArray *results, NSError *error);
typedef void (^FlickrPhotoCompletionBlock)(UIImage *photoImage, NSError *error);
typedef void (^FlickrExploreCompletionBlock)(NSArray *results, NSError *error);

@interface Flickr : NSObject

@property (nonatomic, weak) FlickrKit* apiKit;

- (void)searchFlickrForTerm:(NSString *) term completionBlock:(FlickrSearchCompletionBlock) completionBlock;
- (void)exploreWithCompletionBlock:(FlickrExploreCompletionBlock) completionBlock;;

+ (id)api;

@end
