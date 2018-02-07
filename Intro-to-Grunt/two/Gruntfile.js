module.exports = function(grunt){

	grunt.initConfig({
		pkg: grunt.file.readJSON('package.json'),

		cssmin:{
			combine:{
				files:{
					'main.css':['kids.css', 'news.css']
				}
			}
		}
	});



	grunt.loadNpmTasks('grunt-contrib-cssmin');

	grunt.registerTask('default', ['cssmin']);

};

