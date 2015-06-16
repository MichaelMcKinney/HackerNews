//
//  DetailViewController.h
//  HackerNews
//
//  Created by Michael McKinney on 6/8/15.
//  Copyright (c) 2015 Michael McKinney. All rights reserved.
//

//#import <UIKit/UIKit.h>
#import "DetailViewModel.h"

@interface DetailViewController : UIViewController <UIWebViewDelegate>

@property (weak, nonatomic) IBOutlet UIWebView *webView;
@property (weak, nonatomic) IBOutlet UILabel *middleLabel;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activity;

@property (strong,nonatomic) DetailViewModel *viewModel;
-(void)setupStoryValue:(Story *)story;

@end

